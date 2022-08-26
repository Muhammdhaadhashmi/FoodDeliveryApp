import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../../config/colors.dart';
import '../../providers/checkout_provider.dart';
import '../../widgets/customyext_field.dart';
import '../googlemap/google_map.dart';

class AddDeliveryAddress extends StatefulWidget {
  @override
  _AddDeliverAddressState createState() => _AddDeliverAddressState();
}

enum AddressTypes {
  Home,
  Work,
  Other,
}

class _AddDeliverAddressState extends State<AddDeliveryAddress> {
  var myType = AddressTypes.Home;
  @override
  Widget build(BuildContext context) {
    CheckoutProvider checkoutProvider = Provider.of(context);
    return Scaffold(
      appBar: AppBar(
        iconTheme: IconThemeData(color: textColor),
        backgroundColor: Color(0xffd6b738),
        title: Text(
          "Add Delivery Address", style: TextStyle(fontSize: 18,color: textColor),
        ),
      ),
      bottomNavigationBar: Container(
        margin: EdgeInsets.symmetric(vertical: 10, horizontal: 20),
        height: 48,
        child: checkoutProvider.isloading == false
            ? MaterialButton(
          color: Color(0xffd6b738),
          onPressed: () {
            checkoutProvider.validator(context, myType);
          },
          child: Text(
            "Add Address",
            style: TextStyle(
              color: textColor,
            ),
          ),
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(
              30,
            ),
          ),
        )
            : Center(
          child: CircularProgressIndicator(),
        ),
      ),
      body: Padding(
        padding: EdgeInsets.symmetric(
          horizontal: 20,
        ),
        child: ListView(
          children: [
            CustomTextField(
              lableText: "First name",
              controller: checkoutProvider.firstname,
            ),
            CustomTextField(
              lableText: "Last name",
              controller: checkoutProvider.lastname,
            ),
            CustomTextField(
              lableText: "Mobile No",
              controller: checkoutProvider.mobileNo,
            ),
            CustomTextField(
              lableText: "Alternate Mobile No",
              controller: checkoutProvider.AlternateMobileNo,
            ),
            CustomTextField(
              lableText: "Colony",
              controller: checkoutProvider.Colony,
            ),
            CustomTextField(
              lableText: "Street",
              controller: checkoutProvider.Street,
            ),
            CustomTextField(
              lableText: "Landmark",
              controller: checkoutProvider.Landmark,
            ),
            CustomTextField(
              lableText: "City",
              controller: checkoutProvider.City,
            ),
            CustomTextField(
              lableText: "Area",
              controller: checkoutProvider.Area,
            ),
            CustomTextField(
              lableText: "ZipCode",
              controller: checkoutProvider.ZipCode,
            ),
            InkWell(
              onTap: (){
                Navigator.of(context).push(
                  MaterialPageRoute(
                    builder: (context) => CustomGoogleMap(),
                  ),
                );
              },
              child: Container(
                height: 47,
                width: double.infinity,
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    checkoutProvider.SetLocation == null? Text("Set Location"):
                    Text("Done!",style: TextStyle(fontSize: 18,color: textColor),),
                  ],
                ),
              ),
            ),
            Divider(
              color: Colors.black,
            ),
            ListTile(
              title: Text("Address Type*"),


            ),
            RadioListTile(
              value: AddressTypes.Home,
              activeColor:Color(0xffd6b738),
              groupValue: myType,
              title: Text("Home"),
              onChanged: (AddressTypes value) {
                setState(() {
                  myType = value;
                });
              },
              secondary: Icon(
                Icons.home,
                color: primaryColor,
              ),
            ),
            RadioListTile(
              value: AddressTypes.Work,
              groupValue: myType,
              activeColor:Color(0xffd6b738),
              title: Text("Work"),
              onChanged: (AddressTypes value) {
                setState(() {
                  myType = value;
                });
              },
              secondary: Icon(
                Icons.work,
                color: primaryColor,
              ),
            ),
            RadioListTile(
              value: AddressTypes.Other,
              groupValue: myType,
              activeColor:Color(0xffd6b738),
              title: Text("Other"),
              onChanged: (AddressTypes value) {
                setState(() {
                  myType = value;
                });
              },
              secondary: Icon(
                Icons.devices_other,
                color: primaryColor,
              ),
            )
          ],
        ),
      ),
    );
  }
}
