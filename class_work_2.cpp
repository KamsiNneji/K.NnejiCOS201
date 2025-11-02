#include <iostream>
using namespace std;

int main(){
	int student_age;
	cout <<"Student Age: ";
	cin >> student_age;
	
	if (student_age >= 18)
	{
		cout <<"You are old my guy";
	}
	
	if (student_age < 18)
	{
		cout <<"Enjoy your young days while they last";
	}
}