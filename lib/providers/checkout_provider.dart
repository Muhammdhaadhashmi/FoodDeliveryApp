import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:fluttertoast/fluttertoast.dart';
import 'package:fooddeliveryapp/models/delivery_address_model.dart';
import 'package:location_platform_interface/location_platform_interface.dart';

class CheckoutProvider with ChangeNotifier {
  bool isloading = false;
  TextEditingController firstname = TextEditingController();
  TextEditingController lastname = TextEditingController();
  TextEditingController mobileNo = TextEditingController();
  TextEditingController AlternateMobileNo = TextEditingController();
  TextEditingController Colony = TextEditingController();
  TextEditingController Street = TextEditingController();
  TextEditingController Landmark = TextEditingController();
  TextEditingController City = TextEditingController();
  TextEditingController Area = TextEditingController();
  TextEditingController ZipCode = TextEditingController();
  TextEditingController SetLocation = TextEditingController();

  LocationData setLocation;


  void validator(context, myType) async {
    if (firstname.text.isEmpty) {
      Fluttertoast.showToast(msg: "Firstname is Empty");
    } else if (lastname.text.isEmpty) {
      Fluttertoast.showToast(msg: "Lastname is Empty");
    } else if (mobileNo.text.isEmpty) {
      Fluttertoast.showToast(msg: "MobileNo is Empty");
    } else if (AlternateMobileNo.text.isEmpty) {
      Fluttertoast.showToast(msg: "AlternateMobileNo is Empty");
    } else if (Colony.text.isEmpty) {
      Fluttertoast.showToast(msg: "Colony is Empty");
    } else if (Street.text.isEmpty) {
      Fluttertoast.showToast(msg: "Street is Empty");
    } else if (Landmark.text.isEmpty) {
      Fluttertoast.showToast(msg: "Landmark is Empty");
    } else if (City.text.isEmpty) {
      Fluttertoast.showToast(msg: "City is Empty");
    } else if (Area.text.isEmpty) {
      Fluttertoast.showToast(msg: "Area is Empty");
    } else if (ZipCode.text.isEmpty) {
      Fluttertoast.showToast(msg: "ZipCode is Empty");
    }
    else if (setLocation == null) {
      Fluttertoast.showToast(msg: "setLocation is Empty");
    }

    else {
      isloading = true;
      notifyListeners();
    }
    await FirebaseFirestore.instance
        .collection("AddDeliveryAddress")
        .doc(FirebaseAuth.instance.currentUser.uid)
        .set({
      "firstname": firstname.text,
      "lastname": lastname.text,
      "MobileNo": mobileNo.text,
      "AlternateMobileNo": AlternateMobileNo.text,
      "Colony": Colony.text,
      "Street": Street.text,
      "Landmark": Landmark.text,
      "City": City.text,
      "Area": Area.text,
      "ZipCode": ZipCode.text,
      "addressType": myType.toString(),
      "latitude": setLocation.latitude,
      "longitude": setLocation.longitude
    }).then((value) async {
      isloading = false;
      await Fluttertoast.showToast(msg: "Add your delivery address");
      Navigator.of(context).pop();
      notifyListeners();
    });
    notifyListeners();
  }

  List<DeliveryAddressModel> deliveryaddressList = [];

   getDeliveryAddressData() async {
    List<DeliveryAddressModel> newList = [];

    DeliveryAddressModel deliveryAddressModel;
    DocumentSnapshot _db = await FirebaseFirestore.instance
        .collection("AddDeliveryAddress")
        .doc(FirebaseAuth.instance.currentUser.uid).get();
    if (_db.exists) {
      deliveryAddressModel = DeliveryAddressModel(
        firstName: _db.get("firstname"),
        lastName: _db.get("lastname"),
        addressType: _db.get("addressType"),
        area: _db.get("Area"),
        mobileNo: _db.get("MobileNo"),
        alternateMobileNo: _db.get("AlternateMobileNo"),
        city: _db.get("City"),
        landMark: _db.get("Landmark"),
        colony: _db.get("Colony"),
        street: _db.get("Street"),
        zipCode: _db.get("ZipCode"),
      );
      newList.add(deliveryAddressModel);
     notifyListeners();
    }
    deliveryaddressList=newList;
    notifyListeners();

  }

  List<DeliveryAddressModel> get getDeliveryAddressList{
     return deliveryaddressList;
}
}