#include<iostream>
using namespace std;

// Declare variables to store the user-entered letter and menu choice
char letter,select;

int main(){
	// Loop will run at least once and repeat if user enters y/Y
	do{
		// Ask the user to enter a single character
	cout<<"Enter Letter:-";
	cin>>letter;
	
	// Check if the entered character is a vowel (lowercase or uppercase)
	if(letter=='a'|| letter=='e'|| letter=='i'|| letter=='o' || letter){
		cout<<"Vowel\n";  // Output when letter is a vowel
	}
	else{
		cout<<"Not Vowel\n"; // Output for consonants or other characters
	}
	// Ask if the user wants to test another character
	cout<<"Do You Want More?(y/n):-";
	cin>>select;
	}while(select=='y' || select =='Y'); // Keep looping if user chooses yes
		cout<<"Good Bye"; // Program ends politely
	
	return 0;  // Exit program
}
