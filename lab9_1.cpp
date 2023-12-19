#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, rate, pay, total, newba;
    int year = 0;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
while(loan > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year+1; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << rate/100*loan;
	total = loan+(rate/100*loan);
	cout << setw(13) << left << total;
	if( total < pay ){
	    pay = total;
	    cout << setw(13) << left << pay;
    	newba = total-pay;
    	cout << setw(13) << left << newba;
    	cout << "\n";
    	break;    
	}
	cout << setw(13) << left << pay;
	newba = total-pay;
	cout << setw(13) << left << newba;
	cout << "\n";
	year++;
	loan = newba;
    }
    return 0;
}