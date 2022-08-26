import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:fooddeliveryapp/check_out/deliverydetails/delivery_details.dart';
import 'package:fooddeliveryapp/config/colors.dart';
import 'package:fooddeliveryapp/providers/user_provider.dart';
import 'package:fooddeliveryapp/screens/review%20cart/review_cart.dart';
import '../../methods/methods.dart';
import '../home/drawer side.dart';

class MyProfile extends StatefulWidget {
  UserProvider userProvider;
  MyProfile({this.userProvider});

  @override
  State<MyProfile> createState() => _MyProfileState();
}

class _MyProfileState extends State<MyProfile> {
  Widget listTile({IconData icon,String title }){
    return Column(
      children: [
        Divider(
          height: 1,
        ),
        ListTile(
          leading:Icon(icon),
          title:Text(title),
          trailing: Icon(Icons.arrow_forward_ios),

        )
      ],
    );
  }

  @override
  Widget build(BuildContext context) {
    var userData=widget.userProvider.currentUserData;
    return Scaffold(
      backgroundColor: primaryColor,
      appBar: AppBar(
        iconTheme: IconThemeData(color: textColor),
        backgroundColor: primaryColor,
        elevation: 0.0,
        title: Text("My Profile",style: TextStyle(fontSize: 18,color: textColor),),
      ),
      drawer: DrawerSide(
        userProvider: widget.userProvider,
      ),
      body: Stack(
        children: [
          Column(
            children: [
              Container(
                height: 100,
                color: primaryColor,
              ),
              Container(
                height: 548,
                width: double.infinity,
                padding: EdgeInsets.symmetric(horizontal: 15,vertical: 10),
                decoration: BoxDecoration(
                  color: scaffoldBackgroundColor,
                  borderRadius: BorderRadius.only(
                      topLeft: Radius.circular(30),
                      topRight: Radius.circular(30)),
                ),
                child: ListView(
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.end,
                      children: [
                        Container(
                          width: 250,
                          height: 80,
                          padding: EdgeInsets.only(left: 20),
                          child: SingleChildScrollView(
                            scrollDirection: Axis.horizontal,
                            child: Row(
                              mainAxisAlignment: MainAxisAlignment.spaceAround,
                              children: [
                                Column(
                                  mainAxisAlignment: MainAxisAlignment.center,
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text(userData.userName,
                                      style: TextStyle(
                                        fontSize: 14,fontWeight: FontWeight.bold,
                                        color: textColor,
                                      ),
                                    ),
                                    SizedBox(height: 10,),
                                    Text(userData.userEmail)
                                  ],
                                ),
                                CircleAvatar(
                                  radius: 15,
                                  backgroundColor: primaryColor,
                                  child: CircleAvatar(
                                    radius: 12,
                                    child: Icon(Icons.edit,
                                      color: primaryColor,
                                    ),
                                  ),
                                )
                              ],
                            ),
                          ),
                        ),
                      ],
                    ),
                    GestureDetector(
                      onTap: (){
                        Navigator.of(context).push(MaterialPageRoute(builder:(context)=> ReviewCart()));
                      },
                      child: listTile(icon: Icons.shop_outlined,
                        title: "My Orders",
                      ),
                    ),
                    GestureDetector(
                      onTap: (){
                        Navigator.of(context).push(MaterialPageRoute(builder:(context)=> DeliveryDetails()));
                      },
                      child: listTile(
                        icon: Icons.location_on_outlined,
                        title: "My Delivery Address",
                      ),
                    ),
                    listTile(icon: Icons.person_outlined,
                      title: "Refer a Friends",
                    ),
                    listTile(icon: Icons.file_copy_outlined,
                      title: "Terms and Conditions",
                    ),
                    listTile(icon: Icons.policy_outlined,
                      title: "Privacy Policy",
                    ),
                    listTile(icon: Icons.add_chart_outlined,
                      title: "About",
                    ),
                       GestureDetector(
                         onTap:  () => logOut(context),
                         child: listTile(icon: Icons.exit_to_app_outlined,
                              title: "Log Out",
                    ),
                       ),
                  ],
                ),
              ),
            ],
          ),
          Padding(
            padding: const EdgeInsets.only(top: 40,left: 30),
            child: CircleAvatar(
              radius: 50,
              backgroundColor: primaryColor,
              child: CircleAvatar(
                backgroundImage: NetworkImage(userData.userImage??
                    "https://s3.envato.com/files/328957910/vegi_thumb.png"),
                radius: 45,
                backgroundColor: scaffoldBackgroundColor,
              ),
            ),
          )
        ],
      ),
    );
  }
}

