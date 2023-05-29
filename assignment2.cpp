#include <iostream>
using namespace std;
int main(void){
	int sum = 0;
	int n = 0;
	cout << "Enter any positive integer: ";
	cin >> n;
	for(int i = 0; i<n+1; i++){
		sum = sum + i;
	}
	cout << "Sum of 1 to "<< n << " is " << sum << "." << endl;
}	
