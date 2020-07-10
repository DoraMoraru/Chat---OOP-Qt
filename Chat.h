#pragma once

#include <QtWidgets/QWidget>
#include "ui_Chat.h"
#include"ChatSession.h"


class Chat : public QWidget, public Observer
{
    Q_OBJECT

public:
    Chat(User& u,ChatSession& chat,QWidget *parent = Q_NULLPTR);

private:
    Ui::ChatClass ui;
    User& user;
    ChatSession& chatSession;
    void update() override;
    
public slots:
    void sendMessage();
};
