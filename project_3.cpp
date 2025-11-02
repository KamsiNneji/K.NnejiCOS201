#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double acc_bal = 6000.00;
	double intr_rate = 4.25;
	
	double interest = acc_bal * intr_rate/100 * 1;
	double new_amount = acc_bal + interest;
	double interest_2 = new_amount * intr_rate/100 * 1;
	double new_amount_2 = new_amount + interest_2; 
	cout << "Amount after two years ==> N" << new_amount_2;
	
}