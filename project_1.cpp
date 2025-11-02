#include <iostream>
#include <cmath>
using namespace std;

int main(){
	signed int side_a;
	signed int side_b;
	int hypotenuse;
	
	cout << "Side A ==> ";
	cin >> side_a; 
	
	cout << "Side B ==> ";
	cin >> side_b;
	
	hypotenuse = sqrt((side_a)^2 + (side_b)^2);
	cout << "Hypotenuse = " << hypotenuse;
	
	
}
	
