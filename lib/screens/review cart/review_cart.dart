import 'package:flutter/material.dart';
import 'package:fluttertoast/fluttertoast.dart';
import 'package:fooddeliveryapp/config/colors.dart';
import 'package:fooddeliveryapp/models/review_cart_model.dart';
import 'package:fooddeliveryapp/providers/Reviewcart_provider.dart';
import 'package:provider/provider.dart';

import '../../check_out/deliverydetails/delivery_details.dart';
import '../../widgets/single_items.dart';
class ReviewCart extends StatelessWidget {
  ReviewCartProvider reviewCartProvider;

  showAlertDialog(BuildContext context,ReviewCartModel delete) {
    // set up the buttons
    Widget cancelButton = TextButton(
      child: Text("No"),
      onPressed:  () {
        Navigator.of(context).pop();
      },
    );
    Widget continueButton = TextButton(
      child: Text("Yes"),
      onPressed:  () {
        reviewCartProvider.reviewCartDataDelete(delete.cartId);
        Navigator.of(context).pop();
      },
    );

    // set up the AlertDialog
    AlertDialog alert = AlertDialog(
      title: Text("Cart Product"),
      content: Text("Are you sure you want to delete CartProduct?"),
      actions: [
        cancelButton,
        continueButton,
      ],
    );

    // show the dialog
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return alert;
      },
    );
  }


  @override
  Widget build(BuildContext context) {
    reviewCartProvider = Provider.of<ReviewCartProvider>(context);
    reviewCartProvider.getReviewCartData();
    return Scaffold(
      bottomNavigationBar: ListTile(
        title: Text("Total Amount"),
        subtitle: Text("\$ ${reviewCartProvider.getTotalPrice()}"
          ,style: TextStyle(color: Colors.green[900]),),
        trailing: Container(
          width:160,
          child: MaterialButton(
            child: Text("Submit"),
            color: primaryColor,
            shape: RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(30)
            ),
            onPressed: (){
              if(reviewCartProvider.getReviewCartDataList.isEmpty){
                return Fluttertoast.showToast(msg: "No Cart Data Found");
              }
              Navigator.push(context, MaterialPageRoute(builder: (context)=>DeliveryDetails(),),);
            },
          ),
        ),
      ),
      appBar: AppBar(
        iconTheme: IconThemeData(color: textColor),
        backgroundColor: primaryColor,
        title: Text(
          "Review Cart",
          style: TextStyle(fontSize: 18,color: textColor),
        ),
      ),
      body: reviewCartProvider.getReviewCartDataList.isEmpty?Center(
        child: Text("NO DATA"),
      ):ListView.builder(
        itemCount: reviewCartProvider.getReviewCartDataList.length,
        itemBuilder: (context,index){
          ReviewCartModel data= reviewCartProvider.getReviewCartDataList[index];
          return Column(
            children: [
              SizedBox(
                height: 10,
              ),
              SingleItem(
                isBool: true,
                wishList: false ,
                productImage: data.cartImage,
                productName: data.cartName,
                productPrice: data.cartPrice,
                productId: data.cartId,
                productQuantity: data.cartQuantity,
                productUnit: data.cartUnit,
                onDelete: (){
                  showAlertDialog(context,data);
                },
              ),
            ],
          );
        },
      ),
    );
  }
}
