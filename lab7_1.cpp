#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

bool func3(string x){
	size_t i = 0, L = x.size();
	string y = x;
	while(i < x.size()){
		
		if(x[i] == y[L-1]) {
			if(i == (x.size()+1)/2) return true;
		}
		else return false;
		i++;
		L--;
	}
	return EXIT_SUCCESS;
}

int main(){
	string x;
	bool y;
    cout << "Input text: ";
	cin >> x;
    cout << "Reversed text: ";
	cout << func1(x);
	//
	x = func2(x);
	y = func3(x);
    cout << "\nPalindrome: ";
	if(y == true) cout << "Yes";
	else cout << "No";
    return 0;
}
