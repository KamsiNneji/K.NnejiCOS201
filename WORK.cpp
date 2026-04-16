#include <iostream>
using namespace std;

int main() {
	ofstream outfile ("data.txt");
	if (!outfile) {
		cout <<"Error opening file";
		return 0;
	}
	outfile<<"Welcome to C++ Class";
	outfile.close();
	cout<<"DONE";
}