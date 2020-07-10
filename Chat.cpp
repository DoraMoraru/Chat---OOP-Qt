#include "Chat.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

Chat::Chat(User& u, ChatSession& chat, QWidget *parent)
    : user(u) , QWidget(parent) , chatSession(chat)
{
    ui.setupUi(this);
}

void Chat::update()
{
    this->ui.chat->clear();
    vector<UserMessage> messages = this->chatSession.getMessages();
    for(auto m : messages)
        if (m.get_user().getName() == this->user.getName())
        {
            QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(m.get_message().getMessage()));
            this->ui.chat->addItem(item);
            item->setTextAlignment(Qt::AlignRight);
        }
        else
        {
            QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(m.get_message().getMessage()));
            this->ui.chat->addItem(item);
            item->setTextAlignment(Qt::AlignLeft);
        }
}

void Chat::sendMessage()
{
    string message = this->ui.message->text().toStdString();
    Message m{ message };
    this->chatSession.addMessage(this->user, m);
}
