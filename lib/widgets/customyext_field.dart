

import 'package:flutter/material.dart';
class CustomTextField extends StatelessWidget {
  final TextEditingController controller;
  final lableText;
  final color;
  final TextInputType keyboardType;
    CustomTextField({this.controller,this.keyboardType,this.lableText,this.color});

  @override
  Widget build(BuildContext context) {
     return TextField(
       cursorColor: Color(0xffd6b738),
       keyboardType: keyboardType,
       controller: controller,
       decoration: InputDecoration(
         labelText: lableText,
    ),
       );
  }
}
