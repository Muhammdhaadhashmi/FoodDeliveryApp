import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:fooddeliveryapp/auth/signin.dart';
import 'package:fooddeliveryapp/providers/Reviewcart_provider.dart';
import 'package:fooddeliveryapp/providers/checkout_provider.dart';
import 'package:fooddeliveryapp/providers/product_providers.dart';
import 'package:fooddeliveryapp/providers/user_provider.dart';
import 'package:fooddeliveryapp/providers/wishlist_provider.dart';
import 'package:fooddeliveryapp/screens/home/homes_creen.dart';
import 'package:provider/provider.dart';
import 'config/colors.dart';

void main() async{
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp();
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key key});

  @override
  Widget build(BuildContext context) {
    return MultiProvider(
        providers:[
      ChangeNotifierProvider<ProductProvider>(
         create: (context)=>ProductProvider(),
      ),
      ChangeNotifierProvider<UserProvider>(
      create: (context)=>UserProvider(),
      ),
       ChangeNotifierProvider<ReviewCartProvider>(
       create: (context)=>ReviewCartProvider(),
       ),
     ChangeNotifierProvider<WishListProvider>(
     create: (context)=>WishListProvider(),
     ),
          ChangeNotifierProvider<CheckoutProvider>(
            create: (context)=>CheckoutProvider(),
          ),
        ],
      child: MaterialApp(
        theme: ThemeData(
            primaryColor: primaryColor,
            scaffoldBackgroundColor: scaffoldBackgroundColor),
        debugShowCheckedModeBanner: false,
        home: StreamBuilder(
          stream: FirebaseAuth.instance.authStateChanges(),
             builder: (context, snapShot) {
           if (snapShot.hasData) {
           return HomeScreen ();
            }
            return Signin ();
          }
      ),
      )
    );
  }
}

