/*************************************************************************
    > File Name: Observer.h
    > Author: Damon
    > Mail: thydamon@gmail.com 
    > Created Time: Sun 03 Dec 2017 07:53:50 PM EST
 ************************************************************************/

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Observer;

typedef list<Observer*> ObserverList;

class Subject
{
	public:
		Subject() {}
		~Subject() {}
		virtual void addObserver(Observer *o) = 0;
		virtual void deleteObserver(Observer *o) = 0;
		virtual void notifyObserver() = 0;
};

class SeekJobCenter: public Subject
{
	public:
		SeekJobCenter();
		virtual ~SeekJobCenter(){}
		void addObserver(Observer *o);
		void deleteObserver(Observer *o);

		void notifyObserver();
		void giveNewMessage(string meg);
	
	private:
		string meg;
		bool   changed;
		ObserverList oblist;
};

#endif
