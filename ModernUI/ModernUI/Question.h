#pragma once
#include<iostream>
using namespace System;
public ref class Question {
public:
	String^ question;
	bool answertof;//truefalse
	int answergozine;//test
	String^ answer;//tash
	array<String^>^ option = gcnew array< String^ >(4);//test
	
public:
	int model;
	Question() {
		question = " ";
		answertof = false;
		answergozine = 1;
		answer = " ";
		option[0] = " ";
		option[1] = " ";
		option[2] = " ";
		option[3] = " ";
		model = -1;
	}
	Question(String^ sorat, bool tof, int answ, String^ tashr, array<String^>^ options, int modelu) {
		question = sorat;
		answertof = tof;
		answergozine = answ;
		answer = tashr;
		option[0] = options[0];
		option[1] = options[1];
		option[2] = options[2];
		option[3] = options[3];
		model = modelu;
	}
	String^ returnquestion() {
		return question;
	}
	void setsorat(String^ x) {
		question = x;
	}
	void setanswer(bool x) {
		answertof = x;
	}
	void setanswer(int x) {
		answergozine = x;
	}
	void setanswer(String^ an) {
		answer = an;
	}
	void setgozineha(String^ one, String^ tow, String^ three, String^ four) {
		option[0] = one;
		option[1] = tow;
		option[2] = three;
		option[3] = four;
	}
	
	void setmodel() {
		model = 1;
	}
	String^ getsorat() {
		return question;
	}

	bool getjavabsahihghalat() {
		return answertof;
	}
	int getjavabtesti() {
		return answergozine;
	}
	String^ getjavabtashrihi() {
		return answer;
	}
	String^ getgozineaval() {
		return option[0];
	}
	String^ getgozinedovvom() {
		return option[1];
	}
	String^ getgozinesevvom() {
		return option[2];
	}
	String^ getgozinechaharom() {
		return option[3];
	}
	int getmodel() {
		return model;

	}

};

