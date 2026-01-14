#include<iostream>
using namespace std;

int main(){
	// Outer loop: controls the number of rows (4 rows)
	for(int i=1;i<5;i++){
		
		// Inner loop: prints numbers starting from current row number
        // and prints 4 numbers in each row
	for(int j=i;j<i+4;j++){
		cout<<j;  // print the current number
	}	
	cout<<endl;   // move to the next row after inner loop finishes
   }
}

 // Note: Output will be like:
    // 1234
    // 2345
    // 3456
    // 4567
