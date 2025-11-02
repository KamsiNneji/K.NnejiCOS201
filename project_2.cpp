#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double acc_bal = 6000.00;
	double intr_rate = 4.25;
	
	double interest = acc_bal * intr_rate/100 * 1;
	double new_amount = acc_bal + interest; 
	cout << "Amount after a year ==> N" << new_amount;
}