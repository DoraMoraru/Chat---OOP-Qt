#include "Message.h"

Message::Message(string& message)
{
	this->mess = message;
}

User::User(string& name)
{
	this->name = name;
}

UserMessage::UserMessage(User& u, Message& m)
{
	this->u = u;
	this->m = m;
}
