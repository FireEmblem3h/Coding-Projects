// Workshop 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>


void reverseString(string &s);
bool searchDigit(string &t); 
string toUpper(string r);  
bool validPassword(string &pass); 

using namespace std;
// Main function to Reverse Words
int main()
{
	string type;
  
	cout << "Type something, anything: ";   

	cin >> type; 

	reverseString(type);  

	cout << "Words reversed: " << type << endl;   


	return 0;

}

// Main Function for Finding Digits
int main() {
	
	string type;

	cout << "Type something, anything: ";

	cin >> type;
	
	if (searchDigit(type)) {
		cout << "All digits!\n";
	}
	else
		cout << "Not all digits!\n";

	return 0;
}

// Main function to Revert to Uppercase
int main() {



}

void reverseString(string &s)
{

	int start = 0, end = s.size() - 1; 
	char temp;


	while (start < end) {
		temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;

	}


}

bool searchDigit(string &t) 
{

	bool allDigits = true;

	for (char ch : t) {
		if (ch < '0' || ch < '9') {
			allDigits = false;
		}

	}
	

	return allDigits;

	
}

string toUpper(string r)
{
	// This is the subtracting difference between the ASCII values 'a' and 'A' and so on. So, if your index value is lowercase, then  -= ASCII_DIF to get the uppercase
	const int ASCII_DIF = 32; 

	// Same for loops 
	for (int index = 0; index < r.size(); index++) {
		if (r[index] >= 'a' && r[index] <= 'z') {

			r[index] -= ASCII_DIF;

		}
	}


	return r; 
}

// QUIZ CORRECTIONS:
bool validPassword(string &pass)
{
	if (pass.length() < 8 || pass.length() > 12) {

		return false;

	}

	bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

	// Iterate through the password to check for each required type
	for (char ch : pass) { 
		// Check if character is uppercase (A-Z)
		if (ch >= 'A' && ch <= 'Z') {
			hasUpper = true;
		}
		// Check if character is lowercase (a-z)
		else if (ch >= 'a' && ch <= 'z') {
			hasLower = true;
		}
		// Check if character is a digit (0-9)
		else if (ch >= '0' && ch <= '9') {
			hasDigit = true;
		}
		// Check if character is a special character (non-alphanumeric)
		else {
			hasSpecial = true;
		}
	}

	// Check if all requirements are met
	if (hasUpper && hasLower && hasDigit && hasSpecial) {
		return true;
	}
	else {
		return false;
	}
}


int main() {
	string password;

	// Prompt user to input password
	cout << "Enter your password (8-12 characters, must include upper and lowercase letters, a digit, and a special character): ";
	cin >> password;

	// Call isValidPassword function to check the password
	if (validPassword(password)) {
		cout << "Valid password!" << endl;
	}
	else {
		cout << "Invalid password. Please follow the rules." << endl;
	}

	return 0;
}
