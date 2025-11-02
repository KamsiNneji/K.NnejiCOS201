#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int number_1 = time(0);
	srand(number_1);
	cout <<"Number 1 => " << rand() % 10;
	
	int number_2 = time(0);
	srand(number_2);
	cout <<"Number 1 => " << rand() % 10;
	
	int temp;
	int a;
	
	if (number_1 < number_2){
		number_1 = temp;
		temp = number_2;
		number_2 = a;
		a = number_1;
		}	
}