class DeliveryAddressModel {
  String firstName;
  String lastName;
  String mobileNo;
  String alternateMobileNo;
  String colony;
  String street;
  String landMark;
  String city;
  String area;
  String zipCode;
  String addressType;

  DeliveryAddressModel({
    this.addressType,
    this.area,
    this.alternateMobileNo,
    this.city,
    this.firstName,
    this.landMark,
    this.lastName,
    this.mobileNo,
    this.zipCode,
    this.street,
    this.colony,
  });
}
