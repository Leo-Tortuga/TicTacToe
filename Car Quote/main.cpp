#include <iostream>
using namespace std;
/*
    +GAS CAR
    - User will input the car price and gas price
    - Calculate the price spent on gas with 15000 miles (gas * miles)
    - Calculate the value after 5 years [price - (price * decreasedValue) ] ?
    - Calculate the amount spent on the car (gasMoney + soldCar)
    +HYBRID CAR
    - Calculate the price spent on gas with 15000 miles
            --- Hybrid Users spend about half of gas car users on gas [(asg / 2) * miles] ----
    - Calculate the value after 5 years [price - (price * decreasedValue) ] ?
    - Calculate the amount spent on the car (gasMoney + soldCar)
*/
double calculate(int price, double gas);
double saleCar(int price);
double five_year_value = 0.60;        //Value of car after five years
int years_owned = 5;

int main() {
    int price;
    double gas_price;        //Needed Info
    int resale;
    double hybrid = 45000; //Average Price of Hybrid Car

    //Price 
    cout << "Price of Gas Car: ";
    cin >> price;
    cout << "Gas Prices Near You: ";
    cin >> gas_price;
    
    //Gas Car
    int gas_money = calculate(price, gas_price);    //MPG for 15000 miles for five years
    int gas_resale = saleCar(price);    //After 5 Years
    int gas_result = gas_money - gas_resale;
    cout << "Amount of Money spent on GAS CAR after selling car 5 years later: " << gas_result << endl;


    
    //Hybrid Car
    cout << endl << "Price of A New Hybrid Car: " << hybrid << endl;
     //Only spending half the amount of gas car
    int hybrid_gas = (gas_price / 2); 
    int hybrid_money = calculate(hybrid, hybrid_gas); //Paying gas for a hybrid
    int hybrid_resale = saleCar(hybrid);
    int hybrid_result = hybrid_money - hybrid_resale; 
    
    cout << "Amount of Money spent on HYBRID CAR after selling car 5 years later: " << hybrid_result << endl;

    int overall_savings = gas_result - hybrid_result;
    cout << "Saving with Hybrid Car ---> " << overall_savings << endl;
    cout << "Done!" << endl;
}

double calculate(int price, double gas) {
    int set_miles = 15000 * years_owned;    //Driven in a year
    return set_miles * gas;
}



double saleCar(int price) {
    int value =  price * five_year_value;    // Ex. 30000 * .60 = 12000
    return price - value;                    //30000 - 12000 = 18000 <New value>
}