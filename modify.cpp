#include <iostream>
#include <string>
using namespace std;



int main()
{
float balance;
int products;
float total_amount;
float first_amount;
float second_amount;
const string cashier = "Shadow Boy contact:0122000000";
string available_products[5] = {"BREAD", "FLOUR", "SUGAR", "SOAP", "EGGS"};
float amount_paid;
float product_price[5] = {650.50, 150.10, 200.00, 90.25, 300.00};
string items_bought;
int no_of_items_bought;
string added_item;
int select_another;
int no_of_added_items;
int i;

   // available items
cout<<"\n"<<"THE FOLLOWING PRODUCTS ARE AVAILABLE IN THE SHOP:"<<"\n"<<endl;
for (i=0;i<5;i++){
	cout<<"\t"<<i<<":"<<available_products[i]<<" = "<<"Ksh"<<product_price[i]<<endl;
}

//cout<<"\n"<<"SELECT AN ITEM FROM THE LIST ABOVE:"<<endl;
//cin>>products;
//cout<<"ENTER THE NUMBER OF THE ITEMS YOU HAVE SELECTED:"<<endl;
//cin>>no_of_items_bought;
//cout<<"ADD ANOTHER ITEM YOU WISH TO BUY:"<<endl;
while (select_another == 0 || select_another == 1|| select_another == 2 || select_another == 3 ) {
	
cout<<"\n"<<"SELECT AN ITEM FROM THE LIST ABOVE:"<<endl;
cin>>products;
cout<<"ENTER THE NUMBER OF THE ITEMS YOU HAVE SELECTED:"<<endl;
cin>>no_of_items_bought;
cout<<"ADD ANOTHER ITEM YOU WISH TO BUY:"<<endl;
cin>>select_another;
cout<<"NO OF ITEMS TO BE ADDED:"<<endl;
cin>>no_of_added_items;	

	if (select_another > 4){
		break;
	}
	
		if(products != 0 || products != 1 || products != 2 || products != 3 || products != 4 ){
		cout<<"!!! Invalid Option"<<endl;
			break;
	}
	//else{
		//cout<<"!!! Invalid Option"<<endl;
	//	break;
//		}
}
cout<<"AMOUNT PAID:"<<endl;
cin>>amount_paid;

// items bought
if (products == 0) {
	items_bought = available_products[0];
}
else if (products == 1){
	items_bought = available_products[1];
}
else if (products == 2){
	items_bought = available_products[2];
}
else if (products == 3){
	items_bought = available_products[3];
}
else if (products == 4){
	items_bought = available_products[4];
}
else {
	cout<<"!!! Option Undefined."<<endl;
	}
	
	// second amount
if (select_another == 0) {
	second_amount = product_price[0] * no_of_added_items;
}
else if (select_another == 1){
	second_amount = product_price[1] * no_of_added_items;
}
else if (select_another == 2){
	second_amount = product_price[2] * no_of_added_items;
}
else if (select_another == 3){
	second_amount = product_price[3] * no_of_added_items;
}
else if (select_another == 4){
	second_amount = product_price[4] * no_of_added_items;
}
else{
	cout<<"!!! Option Undefined."<<endl;
	}

   // added item
if (select_another == 0) {
	added_item = available_products[0];
}
else if (select_another == 1){
	added_item = available_products[1];
}
else if (select_another == 2){
	added_item = available_products[2];
}
else if (select_another == 3){
	added_item = available_products[3];
}
else if (select_another == 4){
	added_item = available_products[4];
}
else {
	cout<<"!!! Option unknown."<<endl;
	}




  // total items bought	
    cout<<"======================================="<<endl;
	cout<<"\n"<<"\t"<<"TOTAL ITEMS BOUGHT"<<"\n"<<items_bought<<"\t"<<no_of_items_bought<<endl;
	cout<<added_item<<"\t"<<no_of_added_items<<endl;
	
	//balance
if (products == 0){
	first_amount = product_price[0] * no_of_items_bought;
	total_amount = first_amount + second_amount;
	cout<<"\t\t"<<"Total Amount: "<<total_amount<<endl;
	balance = amount_paid - total_amount;
	cout<<"======================================="<<endl;
		cout<<"\n"<<"Balance:"<<balance<<endl;
	cout<<"======================================="<<endl;
}
else if (products == 1){
	first_amount = product_price[1] * no_of_items_bought;
	total_amount = first_amount + second_amount;
	cout<<"\t\t"<<"Total Amount: "<<total_amount<<endl;
	balance = amount_paid - total_amount;
	cout<<"======================================="<<endl;
	cout<<"\n"<<"Balance:"<<balance<<endl;
	cout<<"======================================="<<endl;
	}
else if (products == 2){
	first_amount = product_price[2] * no_of_items_bought;
	total_amount = first_amount + second_amount;
	cout<<"\t\t"<<"Total Amount: "<<total_amount<<endl;
	balance = amount_paid - total_amount;
	cout<<"======================================="<<endl;
	cout<<"\n"<<"Balance:"<<balance<<endl;
	cout<<"======================================="<<endl;
	}
else if (products == 3){
	first_amount = product_price[3] * no_of_items_bought;
	total_amount = first_amount + second_amount;
	cout<<"\t\t"<<"Total Amount: "<<total_amount<<endl;
	balance = amount_paid - total_amount;
	cout<<"======================================="<<endl;
	cout<<"\n"<<"Balance:"<<balance<<endl;
	cout<<"======================================="<<endl;
	}
else if (products == 4){
	first_amount = product_price[4] * no_of_items_bought;
	total_amount = first_amount + second_amount;
	cout<<"\t\t"<<"Total Amount: "<<total_amount<<endl;
	balance = amount_paid - total_amount;
	cout<<"======================================="<<endl;
	cout<<"\n"<<"Balance:"<<balance<<endl;
	cout<<"======================================="<<endl;
	}

else{
	cout<<"\n"<<"******************************************"<<endl;
	cout<<"Your item not within range,,,,coud'nt find the balance!";
	cout<<"\n"<<"******************************************"<<endl;
}
 // server and slogan
cout<<"\n"<<"SERVED BY :"<<"\n"<<cashier<<endl;
cout<<"\n"<<"WE HAPPY TO SERVE YOU"<<"\n"<<endl;

return 0;

}
