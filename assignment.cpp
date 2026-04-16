#include <iostream>
using namespace std;

int main() {
	int year;
	
	cout<<"Input the year: ";
	cin>>year;
	
	switch (year % 12) {
		case 0:
			cout << "Monkey";
			break;
			
		case 1:
			cout << "Rooster";
			break;
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
}