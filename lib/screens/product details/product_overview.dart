import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:fooddeliveryapp/config/colors.dart';
import 'package:provider/provider.dart';

import '../../providers/wishlist_provider.dart';
import '../../widgets/count.dart';
import '../review cart/review_cart.dart';



enum SigninCharacter{fill,outline}

class Productoverview extends StatefulWidget {
  final String productName;
  final String productImage;
  final int productPrice;
  final String productId;
   Productoverview({this.productName,this.productImage,this.productPrice,this.productId});

  @override
  State<Productoverview> createState() => _ProductoverviewState();
}

class _ProductoverviewState extends State<Productoverview> {

  SigninCharacter _character = SigninCharacter.fill;

  Widget BottomNavigationBar({
    Color iconColor,
    Color backgroundColor,
    Color color,
    String title,
    IconData iconData,
    Function onTap,
  }) {
    return Expanded(
      child: GestureDetector(
        onTap: onTap,
        child: Container(
          padding: EdgeInsets.all(20),
          color: backgroundColor,
          child: Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Icon(
                iconData,
                size: 20,
                color: iconColor,
              ),
              SizedBox(width: 5,),
              Text(
                title,
                style: TextStyle(color: color),
              ),
            ],
          ),
        ),
      ),
    );
  }

  bool wishListBool = false;

  getWishListBool() {
    FirebaseFirestore
        .instance.collection("WishList")
        .doc(FirebaseAuth.instance.currentUser.uid)
        .collection("YourWishList").doc(widget.productId)
        .get().then((value) =>
    {
      if(this.mounted){
        if(value.exists){
          setState(() {
            wishListBool = value.get("wishList");
          },
          )
        }
      }
    });
}
  @override
  Widget build(BuildContext context) {
    WishListProvider wishListProvider = Provider.of(context);
    getWishListBool();
    return Scaffold(
      bottomNavigationBar: Row(
        children: [
          BottomNavigationBar(
            backgroundColor: textColor,
            color: Colors.white70,
            iconColor: Colors.grey,
            title: "Add to WishList",
            iconData: wishListBool==false?Icons.favorite_outline:Icons.favorite,
            onTap: (){
              setState((){
                wishListBool = !wishListBool;
              });
              if(wishListBool==true){
                wishListProvider.addWishListData(
                  wishListId: widget.productId,
                  wishListImage: widget.productImage,
                  wishListName: widget.productName,
                  wishListPrice: widget.productPrice,
                  wishListQuantity: 2
                );
              }
              else{
                wishListProvider.deleteWishList(widget.productId);
              }
            },
          ),

          BottomNavigationBar(
            backgroundColor: primaryColor,
            color: textColor,
            iconColor: Colors.white70,
            title: "Go To Cart",
            iconData: Icons.shop_outlined,
            onTap: (){
              Navigator.of(context).push(MaterialPageRoute(builder: (context)=>ReviewCart()));
            },
          ),
        ],
      ),
      appBar: AppBar(
        backgroundColor: Color(0xffd6b738),
        iconTheme: IconThemeData(color: textColor),
        title: Text(
          "Product Overview",style: TextStyle(color: textColor),
        ),
      ),
      body: Column(
        children: [
          Expanded(
            flex: 2,
              child: Container(
                width: double.infinity,
                child: Column(
                  children: [
                    ListTile(
                      title: Text(widget.productName??""),
                      subtitle: Text("\$50"),
                    ),
                    Container(
                      height: 250,
                      padding: EdgeInsets.all(40),
                      child: Image.network(widget.productImage??""),
                    ),
                    Container(
                      padding: EdgeInsets.symmetric(horizontal: 20),
                      width: double.infinity,
                      child: Text("Available Options",
                        textAlign: TextAlign.start,
                        style: TextStyle(color: textColor,fontWeight: FontWeight.w600 ),)
                    ),
                    Padding(padding: EdgeInsets.symmetric(horizontal: 10
                     ),
                      child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                           Row(
                             children: [
                               CircleAvatar(
                                 radius: 3,
                                 backgroundColor: Colors.green[700],
                               ),
                               Radio(
                                 value: SigninCharacter.fill,
                                 groupValue: _character,
                                 activeColor: Colors.green[700],
                                 onChanged: (value) {
                                   setState(() {
                                     _character=value;
                                   });
                                 },
                               ),
                             ],
                           ),
                          Text("\$${widget.productPrice}"),
                          Count(
                            productId: widget.productId,
                            productImage: widget.productImage,
                            productName: widget.productName,
                            productPrice: widget.productPrice,
                            productUnit: "500 Gram",
                          ),
                         // Container(
                           // padding: EdgeInsets.symmetric(horizontal: 30,vertical: 10
                           // ),
                            //decoration: BoxDecoration(
                              //border: Border.all(color: Colors.grey),
                              //borderRadius: BorderRadius.circular(30),
                            //),
                            //child: Row(
                              //mainAxisAlignment: MainAxisAlignment.center,
                              //children: [
                               // Icon(Icons.add,size: 15,color: primaryColor,
                               // ),
                               // Text("ADD",style: TextStyle(color: primaryColor),)
                             // ],
                           // ),
                          //),
                        ],
                      ),
                    ),
                  ],
                ),
              ),
             ),
          Expanded(
            child: Container(
              padding: EdgeInsets.all(20),
              width: double.infinity,
              child: SingleChildScrollView(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text("About This Product",style: TextStyle(fontSize: 18,fontWeight: FontWeight.w600),
                    ),
                    SizedBox(height: 20,),
                    Text("In marketing, a product is an object or system, or service made available for consumer use as of the consumer demand it is anything that can be offered to a market to satisfy the desire or need of a customer.",
                      style: TextStyle(fontSize: 18,
                          color: textColor,
                      ),
                    ),
                  ],
                ),
              ),
          ),
          ),
                ],
            ),
                );
  }
}
