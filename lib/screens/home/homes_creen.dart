import 'package:flutter/material.dart';
import 'package:fooddeliveryapp/screens/home/single%20product.dart';
import 'package:provider/provider.dart';
import '../../config/colors.dart';
import '../../providers/product_providers.dart';
import '../../providers/user_provider.dart';
import '../product details/product_overview.dart';
import '../review cart/review_cart.dart';
import '../seaarch/search_bar.dart';
import 'drawer side.dart';


class HomeScreen extends StatefulWidget {
  @override
  _HomeScreenState createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> {
  ProductProvider productProvider;

  Widget _buildHerbsProduct(context) {
    return Column(crossAxisAlignment: CrossAxisAlignment.start, children: [
      Padding(
        padding: const EdgeInsets.symmetric(vertical: 20),
        child: Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            Text('Herbs Seasonings'),
            GestureDetector(
              onTap: (){
                Navigator.of(context).push(MaterialPageRoute(builder: (context)=>Search(
                  search: productProvider.getHerbsProductDataList,
                ),),);
              },
              child: Text(
                'view all',
                style: TextStyle(color: Colors.grey),
              ),
            ),
          ],
        ),
      ),

      SingleChildScrollView(
        scrollDirection: Axis.horizontal,
        child: Row(
          children: productProvider.getHerbsProductDataList
              .map((herbsProductData){
            return SingleProduct(
              onTap: () {
                Navigator.of(context).push(MaterialPageRoute(
                    builder: (context) => Productoverview(
                      productId: herbsProductData.productId,
                      productPrice: herbsProductData.productPrice,
                      productName: herbsProductData.productName,
                      productImage:herbsProductData.productImage,
                    )));
              },
              productId: herbsProductData.productId,
              productPrice: herbsProductData.productPrice,
              productImage:herbsProductData.productImage,
              productName: herbsProductData.productName,
              productUnit: herbsProductData,
            );
          }
          ).toList(),
          //children: [],
        ),
      ),
    ],
    );
  // Row(
      //   children: [
      //     Container(
      //       height: 230,
      //       width: 160,
      //       decoration: BoxDecoration(
      //           color: Color(0xffd9dad9),
      //           borderRadius: BorderRadius.circular(10)
      //       ),
      //       child: Column(
      //         crossAxisAlignment: CrossAxisAlignment.start,
      //         children: [
      //           Expanded(
      //             flex: 2,
      //             child: Image.network('https://assets.stickpng.com/images/5b4eed0cc051e602a568ce0c.png'),
      //           ),
      //           Expanded(
      //               child: Padding(
      //                 padding: EdgeInsets.symmetric(horizontal:10 ,vertical:5 ),
      //                 child: Column(
      //                   crossAxisAlignment: CrossAxisAlignment.start,
      //                   children: [
      //                     Text("Fresh Basil",style: TextStyle(color: Colors.black,fontWeight: FontWeight.bold),
      //                     ),
      //                     Text('40\$/50Gram',style: TextStyle(color: Colors.grey),)
      //                   ],
      //                 ),
      //               )
      //           )
      //         ],
      //       ),
      //     )
      //   ],
      // )

  }

  Widget _buildFreshProduct(context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Padding(
          padding: const EdgeInsets.symmetric(vertical: 20),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Text('Fresh Fruits'),
              GestureDetector(
                onTap: (){
                  Navigator.of(context).push(MaterialPageRoute(builder: (context)=>Search(
                    search: productProvider.getFreshProductDataList,
                  ),),);
                },
                child: Text(
                  'view all',
                  style: TextStyle(color: Colors.grey),
                ),
              ),
            ],
          ),
        ),
        SingleChildScrollView(
          scrollDirection: Axis.horizontal,
          child: Row(
              children: productProvider.getFreshProductDataList
                  .map((freshProductData) {
                return SingleProduct(
                  onTap: () {
                    Navigator.of(context).push(MaterialPageRoute(
                        builder: (context) => Productoverview(
                          productId: freshProductData.productId,
                          productPrice: freshProductData.productPrice,
                          productName: freshProductData.productName,
                          productImage:freshProductData.productImage,
                        )));
                  },
                  productId: freshProductData.productId,
                  productPrice: freshProductData.productPrice,
                  productImage:freshProductData.productImage,
                  productName: freshProductData.productName,
                  productUnit: freshProductData,
                );
              },
              ).toList()
          ),
        ),
      ],
    );
  }
  //
  Widget _buildRootProduct() {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Padding(
          padding: const EdgeInsets.symmetric(vertical: 20),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Text('Root Vegetable'),
              GestureDetector(
                onTap: (){
                  Navigator.of(context).push(
                    MaterialPageRoute(
                      builder: (context) => Search(
                        search: productProvider.getRootProductDataList,
                      ),
                    ),
                  );
                },
                child: Text(
                  'view all',
                  style: TextStyle(color: Colors.grey),
                ),
              ),
            ],
          ),
        ),
        SingleChildScrollView(
          scrollDirection: Axis.horizontal,
          child: Row(
              children: productProvider.getRootProductDataList
                  .map((rootProductData) {
                return SingleProduct(
                  onTap: () {
                    Navigator.of(context).push(MaterialPageRoute(
                        builder: (context) => Productoverview(
                          productId: rootProductData.productId,
                          productPrice: rootProductData.productPrice,
                          productName: rootProductData.productName,
                          productImage: rootProductData.productImage,
                        )));
                  },
                  productId: rootProductData.productId,
                  productPrice: rootProductData.productPrice,
                  productImage:rootProductData.productImage,
                  productName: rootProductData.productName,
                  productUnit: rootProductData,
                );
              },
              ).toList()
          ),
        ),
      ],
    );
  }
  //
  @override
  void initState() {
    ProductProvider initproductProvider = Provider.of(context, listen: false);
    initproductProvider.fetchHerbsProductData();
    initproductProvider.fetchFreshProductData();
    initproductProvider.fetchRootProductData();
    super.initState();
  }

   @override
   Widget build(BuildContext context) {
    productProvider = Provider.of(context);
   UserProvider userProvider = Provider.of(context);
   userProvider.getUserData();
    return Scaffold(
      drawer: DrawerSide(userProvider: userProvider,),
      appBar: AppBar(
        iconTheme: IconThemeData(color: textColor),
        title: Text(
          'Home',
          style: TextStyle(color: textColor, fontSize: 17),
        ),
        backgroundColor: Color(0xffd6b738),
        actions: [
          CircleAvatar(
            radius: 15,
            backgroundColor: Color(0xffd6d382),
            child: IconButton(
              onPressed: () {
                Navigator.of(context).push(
                  MaterialPageRoute(
                    builder: (context) => Search(
                       search: productProvider.getAllProductSearch
                    ),
                  ),
                );
              },
              icon: Icon(
                Icons.search,
                size: 17,
                color: textColor,
              ),
            ),
          ),
          Padding(
            padding: const EdgeInsets.symmetric(horizontal: 5),
            child: GestureDetector(
              onTap: (){
                Navigator.of(context).push(MaterialPageRoute(builder: (context)=>ReviewCart()));
              },
              child: CircleAvatar(
                backgroundColor: Color(0xffd6d382),
                radius: 15,
                child: Icon(
                  Icons.shop,
                  size: 17,
                  color: textColor,
                ),
              ),
            ),
          ),
        ],
      ),
      body: Padding(
        padding: const EdgeInsets.symmetric(vertical: 10, horizontal: 10),
        child: ListView(
          children: [
            Container(
              height: 150,
              decoration: BoxDecoration(
                image: DecorationImage(
                  fit: BoxFit.cover,
                  image: NetworkImage(
                      'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQi0Xg-k622Sbztlrb-L1o1CAla3zCbVc2lUw&usqp=CAU'),
                ),
                color: Colors.red,
                borderRadius: BorderRadius.circular(10),
              ),
              child: Row(
                children: [
                  Expanded(
                    flex: 2,
                    child: Container(
                      child: Column(
                        children: [
                          Padding(
                            padding:
                            const EdgeInsets.only(right: 130, bottom: 10),
                            child: Container(
                              height: 50,
                              width: 100,
                              decoration: BoxDecoration(
                                color: Color(0xffd1ad17),
                                borderRadius: BorderRadius.only(
                                  bottomRight: Radius.circular(50),
                                  bottomLeft: Radius.circular(50),
                                ),
                              ),
                              child: Center(
                                child: Text(
                                  'Veggie',
                                  style: TextStyle(
                                    fontSize: 20,
                                    color: Colors.white,
                                    shadows: [
                                      BoxShadow(
                                          color: Colors.green,
                                          blurRadius: 10,
                                          offset: Offset(3, 3))
                                    ],
                                  ),
                                ),
                              ),
                            ),
                          ),
                          Text(
                            '30% Off',
                            style: TextStyle(
                                fontSize: 40,
                                color: Colors.green[100],
                                fontWeight: FontWeight.bold),
                          ),
                          Padding(
                            padding: const EdgeInsets.only(left: 20),
                            child: Text(
                              'On all vegetables products',
                              style: TextStyle(
                                color: Colors.white,
                              ),
                            ),
                          ),
                        ],
                      ),
                    ),
                  ),
                  Expanded(
                    child: Container(),
                  ),
                ],
              ),
            ),
            _buildHerbsProduct(context),
            _buildFreshProduct(context),
             _buildRootProduct(),
            _buildHerbsProduct(context),
          ],
        ),
      ),
    );
  }
}
