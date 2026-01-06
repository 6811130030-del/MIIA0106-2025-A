#include <iostream>
#include <string>
using namespace std;

struct Phone 
{
    string mobile;
    string home;
};

struct Parent 
{
    string name;
    string relationship;
    Phone contact;
};

struct Student 
{
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};
int main() 
{
    Student s;

    cout << "=== Input Student Data ===\n";
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Nickname: ";
    cin >> s.nickname;
    cout << "Enter Line ID: ";
    cin >> s.lineId;

    cout << "\n=== Student Contact Info ===\n";
    cout << "Enter Mobile Number: ";
    cin >> s.myContact.mobile;
    cout << "Enter Home Number: ";
    cin >> s.myContact.home;

    cout << "\n=== Parent Data ===\n";
    cout << "Enter Parent Name: ";
    cin >> s.myParent.name;
    cout << "Enter Relationship: ";
    cin >> s.myParent.relationship;

    cout << "\n=== Parent Contact Info ===\n";
    cout << "Enter Parent Mobile Number: ";
    cin >> s.myParent.contact.mobile;
    cout << "Enter Parent Home Number: ";
    cin >> s.myParent.contact.home;

    cout << "\nStudent Data (Student):\n";
    cout << "ID (id): " << s.id << endl;
    cout << "Nickname (nickname): " << s.nickname << endl;
    cout << "Line ID (lineId): " << s.lineId << endl;

    cout << "\nStudent's Contact Info (Student's Phone - myContact):\n";
    cout << "Mobile Number (mobile): " << s.myContact.mobile << endl;
    cout << "Home Number (home): " << s.myContact.home << endl;

    cout << "\nParent Data (Parent - myParent):\n";
    cout << "Parent's Name (name): " << s.myParent.name << endl;
    cout << "Relationship (relationship): " << s.myParent.relationship << endl;

    cout << "\nParent's Contact Info (Parent's Phone - contact):\n";
    cout << "Parent's Mobile Number (mobile): "
        << s.myParent.contact.mobile << endl;
    cout << "Parent's Home Number (home): "
        << s.myParent.contact.home << endl;

    return 0;
}