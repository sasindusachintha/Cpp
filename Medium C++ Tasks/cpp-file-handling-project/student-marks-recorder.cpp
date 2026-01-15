#include<iostream>
#include<fstream>
using namespace std;

int main(){

	int total=0;
	int count=1;
	int marks;
	string name;
	ofstream marksin;
	marksin.open("marks.txt",ios_base::app);
	
	while(count<=3){
		cout<<"Enter Student Name: ";
		cin>>name;
		cout<<"Enter Student Marks: ";
		 while(!(cin>>marks)){
		 	cin.clear();
		 	cin.ignore(1000, '\n');
		 	cout<<"Enter valid marks";
		 }

		marksin<<name<<" : "<<marks<<endl;
 		total=total+marks;
 		count+=1;	
   }
       marksin.close();
       cout<<"Total: "<<total;
}

