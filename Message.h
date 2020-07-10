#pragma once
#include<string>

using namespace std;

class Message
{
public:
	Message() {};
	Message(string& message);
	~Message() {};
	string getMessage() { return this->mess; };

private:
	string mess;
};


class User
{
public:
	User() {};
	User(string& name);
	~User() {};
	string getName() { return this->name; }

private:
	string name;
};


class UserMessage
{
public:
	UserMessage() {};
	UserMessage(User& u, Message& m);
	~UserMessage() {};
	Message get_message() { return m; };
	User get_user() { return u; };

private:
	Message m;
	User u;
};
