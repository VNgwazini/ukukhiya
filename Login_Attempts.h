#pragma once
#include <string>

using namespace std;
class Login_Attempts
{
public:
	Login_Attempts() {}
	~Login_Attempts() {}

	const string stored_Password = { "Th!$!$@P@$$w0rd" };
	string entered_Password, wrong_Password;

	
};

string get_Password() {
	cout << "Please enter the password to continue: \n";
	cin >> entered_Password;
	cout << "Password Received";
	return entered_Password;
}

string check_Password(string stored_Password, string entered_Password) {
	string next_attempt;
	if (stored_Password != entered_Password) {

		cout << "\nError! The password you entered was not valid.\n";
		cout << "\nPlease enter your password again.\n\n";
		cin >> next_attempt;
		return next_attempt;
	}
	else cout << "\nAccess Granted!";
	return 0;
}



