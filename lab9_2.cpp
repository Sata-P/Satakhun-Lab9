#include<iostream>
using namespace std;

void printO(int x, int y){
    
 if(x==0 or y < 0){

 cout << "Invalid input";
 
 }else{
     
    for(int i=0; i < x; i++){
        
        for(int j=0; j < y; j++){
            cout << "O";  
            } 
            cout << '\n';
            }
            
        }

    }

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
