#Pragma once
class Booking {
	private:
		Customer* cus;		
		string bookingID;
		string branchName;
		string date;
	public:
		Booking();//default constructor
		Booking(string pbookingID, string pbranchName, string pdate, Customer* pcustomer
		);//overloaded constructor
