#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
    // Variable to store the total of all marks
	int total=0;
	
	 // Counter to track number of students entered
	int count=1;
	int marks;
	string name;
	
	// Output file stream used to write data into marks.txt
	ofstream marksin;
	
	// Open the file in append mode (adds new data without erasing old data)
	marksin.open("marks.txt",ios_base::app);
	
	// Loop runs 3 times to input data for 3 students
	while(count<=3){
		cout<<"Enter Student Name: ";
		cin>>name;
		cout<<"Enter Student Marks: ";
		
		// Validate input (in case someone enters a letter instead of a number)
		 while(!(cin>>marks)){
		 	cin.clear();               // Clear the error state
		 	cin.ignore(1000, '\n');   // Remove invalid input from buffer
		 	cout<<"Enter valid marks";
		 }
        
        // Write name and marks into the text file
		marksin<<name<<" : "<<marks<<endl;
 		total=total+marks;
 		count+=1;	
   }
      // Close the file after writing data
       marksin.close();
       cout<<"Total: "<<total;
}

