#include<iostream>
using namespace std;

char letter,select;

int main(){
	do{
	cout<<"Enter Letter:-";
	cin>>letter;
	
	if(letter=='a'|| letter=='e'|| letter=='i'|| letter=='o' || letter){
		cout<<"Vowel\n";
	}
	else{
		cout<<"Not Vowel\n";
	}
	cout<<"Do You Want More?(y/n):-";
	cin>>select;
	}while(select=='y' || select =='Y');
		cout<<"Good Bye";
	
	return 0;
}
