#include <iostream>

using namespace std;

int main(){
	int num;
	
	cin >> num;

	if (num > 0 && num%2==1) {
		cout << "ODD" << endl;
	}
	else if (num > 0 && num%2==0){
		cout << "EVEN" << endl;
	}
	else{}
    return 0;
}


