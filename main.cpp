#include "Chat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    string s1 = "Alex";
    string s2 = "Dora";
    string s3 = "Sergiu";
    User u1{ s1 };
    User u2{ s2 };
    User u3{ s3 };
    ChatSession chat{};
    Chat gui1{u1,chat};
    Chat gui2{ u2,chat };
    Chat gui3{ u3,chat };
    chat.registerObserver(&gui1);
    chat.registerObserver(&gui2);
    chat.registerObserver(&gui3);
    gui1.show();
    gui2.show();
    gui3.show();
    return a.exec();
}
