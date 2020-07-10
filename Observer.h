#pragma once
#include<vector>
#include<iostream>

using namespace std;

class Observer
{
private:
	

public:
	virtual ~Observer() {};
	virtual void update() = 0;

};

class Subject
{
private:
	vector<Observer*> obs;

public:
	void registerObserver(Observer* o)
	{
		obs.push_back(o);
	};
	void unregisterObserver(Observer* o)
	{
		auto it = find(this->obs.begin(), this->obs.end(), o);
		if (it != this->obs.end())
			this->obs.erase(it);
	};
	void notify()
	{
		for (auto o : this->obs)
			o->update();
	};
};