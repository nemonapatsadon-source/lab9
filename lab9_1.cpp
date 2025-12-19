#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double l ;
	double r ;
	double p ;

	cout << "Enter initial loan: ";
	cin >> l ;
	cout << "Enter interest rate per year (%): ";
	cin >> r ;
	cout << "Enter amount you can pay per year: ";
	cin >> p ;

	int N = 0 ;
	double x = l;

	while(x > 0){
		x = x + (x*(r/100))-p ;
		N++;
	}


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	for(int i = 0; i < N; ++i ){
	double IT =l*(r/100);
	double TT = l+(IT);
	if(TT < p ){
		p = TT;
	}
	double NB = TT-p ;
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << l;
	cout << setw(13) << left << IT;
	cout << setw(13) << left << TT;
	cout << setw(13) << left << p;
	cout << setw(13) << left << NB;
	cout << "\n";	

	l = NB;


	}
	return 0;
}
