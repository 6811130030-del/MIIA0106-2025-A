#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};



void inputData(Student& s) {
    cout << "---------------------------------" << endl;
    cout << "      PLEASE ENTER DATA          " << endl;
    cout << "---------------------------------" << endl;

    cout << "[1] Student Info" << endl;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Nickname: ";
    cin >> s.nickname;
    cout << "Enter Line ID: ";
    cin >> s.lineId;
    cout << endl;

    cout << "[2] Student Contact" << endl;
    cout << "Enter Mobile Number: ";
    cin >> s.myContact.mobile;
    cout << "Enter Home Number: ";
    cin >> s.myContact.home;
    cout << endl;

    cout << "[3] Parent Info" << endl;
    cout << "Enter Parent Name: ";
    cin >> s.myParent.name;
    cout << "Enter Relationship (e.g. Father, Mother): ";
    cin >> s.myParent.relationship;
    cout << endl;

    cout << "[4] Parent Contact" << endl;
    cout << "Enter Parent Mobile: ";

    cin >> s.myParent.contact.mobile;
    cout << "Enter Parent Home Number: ";
    cin >> s.myParent.contact.home;
    cout << "---------------------------------" << endl;
}


void displayData(Student s) {
    cout << endl;
    cout << "========================================" << endl;
    cout << "       STUDENT PROFILE REPORT           " << endl;
    cout << "========================================" << endl;

    cout << "1. Student Info:" << endl;
    cout << "   ID       : " << s.id << endl;
    cout << "   Nickname : " << s.nickname << endl;
    cout << "   Line ID  : " << s.lineId << endl;
    cout << endl;

    cout << "2. Student Contact:" << endl;
    cout << "   Mobile   : " << s.myContact.mobile << endl;
    cout << "   Home     : " << s.myContact.home << endl;
    cout << endl;

    cout << "3. Parent Info:" << endl;
    cout << "   Name     : " << s.myParent.name << endl;
    cout << "   Relation : " << s.myParent.relationship << endl;
    cout << endl;

    cout << "4. Parent Contact:" << endl;
    cout << "   Mobile   : " << s.myParent.contact.mobile << endl;
    cout << "   Home     : " << s.myParent.contact.home << endl;
    cout << "========================================" << endl;
}

int main() {

    Student s1;

    inputData(s1);

    displayData(s1);

    return 0;
}