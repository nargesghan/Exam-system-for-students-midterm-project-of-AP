#pragma once
#include<iostream>
using namespace System;
public ref class student
{
	String^ firstname;
	System::String^ lastname;
	System::String^ username;
	System::String^ password;
	String^ stno;

public:
	student(const student^ st) {
		firstname = st->firstname;
		lastname = st->lastname;
		username = st->username;
		password = st->password;
		stno = st->stno;
	}
	student() {
		firstname = "a";
		lastname = "a";
		username = "a";
		password = "a";
		stno = "a";
	}
	student(String^ f, String^ l, String^ u, String^ p, String^ s) {
		firstname = f;
		lastname = l;
		username = u;
		password = p;
		stno = s;
	}
	bool finde(String^ user, String^ pass) {
		if (user == username && pass == password)
			return true;
		else return false;

	}
	bool Repetitious(student^ st) {
		if (username == st->username)
			return true;
		else return false;
	}
	String^ getfirstname() {
		return firstname;
	}
	String^ getlastname() {
		return lastname;
	}
};
