/*************************************************************************
    > File Name: Subject.cpp
    > Author: Damon
    > Mail: thydamon@gmail.com 
    > Created Time: Mon 04 Dec 2017 06:56:03 PM EST
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include "Subject.h"
#include "Observer.h"
#include "string.h"

SeekJobCenter::SeekJobCenter()
{
	meg = "";
	changed = false;
}

void SeekJobCenter::addObserver(Observer *o)
{
	list<Observer*>::iterator it;
	it = find(oblist.begin(),oblist.end(),o);
	if (it == oblist.end())
	{
		oblist.push_back(o);
	}

	return;
}

void SeekJobCenter::deleteObserver(Observer *o)
{
	list<Observer*>::iterator it;
	it = find(oblist.begin(),oblist.end(),o);
	if (it != oblist.end())
	{
		oblist.remove(*it);
		delete(*it);
	}

	return;
}

void SeekJobCenter::notifyObserver()
{
	list<Observer*>::iterator it;
	if (changed)
	{
		for (it = oblist.begin(); it != oblist.end(); ++it)
		{
			(*it)->hearTelephone(meg);
		}
		changed = false;
	}

	return;
}

void SeekJobCenter::giveNewMessage(string str)
{
	if (0 == strcmp(str.c_str(),meg.c_str()))
	{
		changed = false;
	}
	else
	{
		meg = str;
		changed = true;
	}

	return;
}
