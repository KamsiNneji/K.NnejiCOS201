#include <iostream>
using namespace std;

int main(){
	int number;
	cout <<"Number ==> ";
	cin >> number;
	
	if (number % 5== 0)
	{
		cout <<"HiFive";
	}
	
	if (number % 2== 0)
	{
		cout <<"HiEven";
	}
	
	if (number % 5== 0 and number % 2== 0)
	{
		cout <<"Both HiFive And HiEven";
	}
}