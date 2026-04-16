#include <iostream>
using namespace std;

int main() {
	int account_bal = 50000;
	int withdraw_limit = 20000;
	int user_pin = 4321;
	int correct_pin;
	
	bool verifyPin (int correct_pin) {
		while (correct_pin != user_pin)
		{
			cout <<"USER PIN: ";
			cin >> correct_pin;
			
			if (correct_pin == user_pin) {
				cout <<"Pin is correct";
			}else {
				cout <<"Incorrect, try again";
			}
			
			
		}
		
	}
}