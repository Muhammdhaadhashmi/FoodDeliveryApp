import 'package:flutter/material.dart';
import '../../config/colors.dart';
import '../../models/product_model.dart';
import '../../widgets/single_items.dart';

enum SigninCharacter { lowToHigh, highToLow, alphabetically }

class Search extends StatefulWidget {
  final List<ProductModel> search;
  Search({this.search});
  @override
  _SearchState createState() => _SearchState();
}

class _SearchState extends State<Search> {

  String query="";
  SigninCharacter _character = SigninCharacter.alphabetically;

  searchItem(String query){
    List<ProductModel>searchFood=widget.search.where((element){
      return element.productName.toLowerCase().contains(query);

    }).toList();
    return searchFood;

  }

  @override
  Widget build(BuildContext context) {
    List<ProductModel>_searchItem =searchItem(query);
    return Scaffold(
        appBar: AppBar(
          iconTheme: IconThemeData(color: textColor),
          backgroundColor: Color(0xffd6b738),
          title: Text(
            "Search",
            style: TextStyle(color: textColor, fontSize: 17),
          ),
          actions: [
            Padding(
              padding: EdgeInsets.all(8.0),
              child: Icon(Icons.menu_rounded
              ),
            ),
          ],
        ),
        body: ListView(
          children: [
            ListTile(
              title: Text("Items"),
            ),
            Container(
              height: 52,
              margin: EdgeInsets.symmetric(
                horizontal: 20,
              ),
              child: TextField(
                onChanged: (value){
                  setState((){
                    query=value;
                  });
                },
                decoration: InputDecoration(
                  border: OutlineInputBorder(
                      borderRadius: BorderRadius.circular(30),
                      borderSide: BorderSide.none),
                  fillColor: Color(0xffc2c2c2),
                  filled: true,
                  hintText: "Search for items in the store",
                  suffixIcon: Icon(
                    Icons.search,
                    color: textColor,
                  ),
                ),
                cursorColor: Colors.black45,
              ),
            ),
            SizedBox(height: 10),
            Column(
              children: _searchItem.map((data) {
                return  SingleItem(
                  isBool: false,
                  productImage: data.productImage,
                  productName: data.productName,
                  productPrice: data.productPrice,
                );
              }
              ).toList(),
            ),
          ],),
        );
  }
}
