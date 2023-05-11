#pragma once
#include<iostream>

using namespace System;
public ref class teacher
{
	String^ firstname;
	System::String^ lastname;
	System::String^ username;
	System::String^ password;


public:

	teacher(const teacher^ st) {
		firstname = st->firstname;
		lastname = st->lastname;
		username = st->username;
		password = st->password;

	}


	teacher() {
		firstname = "";
		lastname = "";
		username = "";
		password = "";

	}
	teacher(String^ f, String^ l, String^ u, String^ p) {
		firstname = f;
		lastname = l;
		username = u;
		password = p;

	}
	bool finde(String^ user, String^ pass) {
		if (user == username && pass == password)
			return true;
		else return false;

	}
	bool Repetitious(teacher^ st) {
		if (username == st->username)
			return true;
		else return false;
	}

};

