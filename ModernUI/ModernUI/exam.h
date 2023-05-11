#pragma once
#include"student.h"
#include<iostream>
#include"teacher.h"
#include"Question.h"
using namespace System;
public ref class exam
{
public:
	String^ name;
	String^ bodjebandi;
	time_t timetostart;
	time_t timetoend;
	array<student^>^ students = gcnew array< student^ >(10);
	int teacherr;
	int numberofques;
	time_t zaman;
	array<Question^>^ all = gcnew array <Question^>(15);
public:
	exam(String^ na, String^ bodj, int st, int en,int tea,int numoq) {
		name = na;
		bodjebandi = bodj;
		timetostart = st;
		timetoend = en;
		teacherr = tea;
		numberofques = numoq;
		zaman = timetoend- timetostart;
	}
	/*String^ question;
	bool answertof;//truefalse
	int answergozine;//test
	String^ answer;//tash
	array<String^>^ option = gcnew array< String^ >(4);//test
	int model;*/
	void setquestiontashrihi(int i,String^ sor,int modelu,String^tashrihi) {
		Question^ q = gcnew Question;
		q->model=(modelu);
		q->setsorat(sor);
		q->setanswer(tashrihi);
		all[i] = q;
	}
	void setquestiontesti(int i, String^ sor, int modelu, String^ goz1, String^ goz2, String^ goz3, String^ goz4, int javab) {
		Question^ q = gcnew Question;
		q->model=(modelu);
        q->setsorat(sor);
		q->setanswer(javab);
		q->setgozineha(goz1, goz2, goz3, goz4);
		all[i] = q;
	}
	void setquestiontrueorfalse(int i, String^ sor, int modelu, bool javab) {
		Question^ q = gcnew Question;
		q->model=(modelu);
		q->setsorat(sor);
		q->setanswer(javab);
		all[i] = q;
	}
	void settimeend(int t) {
		timetoend = t;
	}

	void settimetostart(int t) {
		timetostart = t;
	}
	

	
	int getnumberofques() {
		return numberofques;
	}
	void setzaman() {
		zaman = timetoend - timetostart;
	}

	void setstudent(int i,student^ st) {
		students[i] = st;
	}
	int getteacher() {
		return teacherr;
	}
	String^ getname() {
		return name;
	}
	student^ getstudent(int i) {
		return students[i];
	}
};

