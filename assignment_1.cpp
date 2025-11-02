#include <iostream>
#include <string>
using namespace std;

int main(){
	int photo_fees = 10000;
	int paint_fees = 8000;
	int fish_fees = 15000;
	int bak_fees = 13000;
	int pubs_fees = 5000;
	
	int campA = 10000;
	int campB = 2500;
	int campC = 5000;
	int campD = 13000;
	int campE = 5000;
	
	int days_a = 3;
	int days_b = 5;
	int days_c = 7;
	int days_d = 5;
	int days_e = 2;
	
	string name_stud;
	bool ispaustudent;
	string course_stud;
	string accomod;
	
	cout <<"Student Name: ";;
	getline(cin, name_stud);
	cout <<"Welcome " <<name_stud ; \n
	
	cout <<"Is Pau Student? (Type in 1 for true or 0 for false): ";
	int flag;
	cin>>flag;
	ispaustudent = (flag != 0);
	
	cout <<"COURSES. \n";
	cout <<"1. Photography     \n";
	cout <<"2. Painting        \n";
	cout <<"3. Fish Farming    \n";
	cout <<"4. Baking          \n";
	cout <<"5. Public Speaking \n";
	
	cout <<"Select Course: ";
	getline(cin, course_stud);
	
	cout <<"ACCOMODATION. \n";
	cout <<"1. Camp House A  \n";
	cout <<"2. Camp House B  \n";
	cout <<"3. Camp House C  \n";
	cout <<"4. Camp House D  \n";
	cout <<"5. Camp House E  \n";
	
	cout <<"Select Accomodation: ";
	getline(cin, accomod);
	
	
	
	
	
}