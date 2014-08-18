// Sovereign.cpp : Defines the entry point for the console application.
//

#include <tchar.h>
#include <iostream>
#include <string>

#include "Messages.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char userIn[100];

	std::string input;

	cout << Messages::StartUpMessage();
	cin >> input;

	if (input.compare("Tyler") == 0) {
		cout << "Apologies, welcome Tyler how can I be of assistance?\n";
	} else {
		cout << "You are unrecognized by this system\nAlert Sent\nShutDown Initiated\n";
	}

	cin >> input;

	return 0;
}

