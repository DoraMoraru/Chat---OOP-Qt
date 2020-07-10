#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"Message.h"
#include"Observer.h"

using namespace std;

class ChatSession : public Subject
{
public:
	ChatSession();
	~ChatSession() {};
	void addMessage(User& u, Message& m)
	{
		UserMessage new_message{ u,m };
		this->chat.push_back(new_message);
		this->notify();
	};
	vector<UserMessage> getMessages()
	{
		return this->chat;
	};

private:
	vector<UserMessage> chat;
};
