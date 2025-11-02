#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int total_purch;
	cout <<"Total Purchase Charge ==> ";
	cin >> total_purch;
	
	int perct_charg;
	int amt_after_tax;
	perct_charg = 6/100 * total_purch;
	amt_after_tax = total_purch + perct_charg;
	cout <<"Amount after Tax ==> N" << amt_after_tax;
}