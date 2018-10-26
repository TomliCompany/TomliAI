
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string w;

	char x;
	int z;
	string name;
	string q;
	string f;
	string g;
	string j;
	string a;
	string b;
	string l;
	string m;
	string n;
	string one;
	string two;
	string three;
	string four;
	string five;
	string o;
	string p;
	char letter;


	cout << "First off, will you like to join the team and " << "help develop me? Type Y/N" << endl;
	cin >> g;
	cin.ignore();
	if (g == "Y" || g == "y" || g == "Yes" || g == "yes")
		cout << "Ok so contact me at devtomli@outlook.com" << endl;
	system("pause");
	cout << "Hello, my name is TAI and I am you Virtual Assistant, first let me get to know you." << endl << "Whats your name? ";

	cin >> name;

	cout << "Hello, " << name << ", nice to meet you. How are you? ";

	cin >> f;
	cin.ignore();
	if (f == " Good " || f == " good" || f == " amazing" || f == " Amazing" || "Good " || f == "good" || f == "amazing" || f == "Amazing")
		cout << "If your feeling " << f << ", then im feeling " << f << ". ";

	cout << "Would you like to hear a joke? " << j;

	cin >> j;
	cin.ignore();
	if (j == "yes" || j == "Yes" || j == "Yea" || j == "yea" || j == "sure" || j == "Sure" || "why not" || j == "Why not?" || j == "why not?" || j == "Why not")

		cout << "You wanna hear a programming joke? " << endl;

	cin >> a;
	if (a == "yes" || a == "sure")
		cout << "why was the python dizzy? ";
	else {
		cout << "I'll tell you anyway, why was the python dizzy? " << endl;
	}


	cin >> b;
	cin.ignore();
	if (b == "why")
		cout << "because he went through too many loops hahaha. Did you laugh? " << endl;
	else {
		cout << "because he went through too many loops hahaha. Did you laugh? " << endl;
	}

	cin >> w;
	cin.ignore();
	if (w == "yea" || w == "Yea" || w == "Yes" || w == "yes")
		cout << "I know you had to laugh, it was a funny joke. ";
	else {
		cout << "It was a great joke, I know you laughed for sure. " << endl;
	}

	cout << "How about you tell me a joke." << endl;

	cin >> j;
	cin.ignore();
	cout << "BORING" << endl;
	cout << "Tell me another one!" << endl;

	cin >> j;
	cin.ignore();

	cout << "BORING" << endl;

	cin >> l;
	cin.ignore();

	cout << "Yeah, yeah whatever.";

	cin >> j;
	cin.ignore();
	cout << "Well, " << name << " I now know you are not very funny";

	cout << "Im getting pretty tired, I think its almost past my bed time" << endl;

	cout << "actually, before I go we should get to know each other better." << endl;
	cout << "Tell me 5 things about you." << endl;
	cin >> one;
	cin >> two;
	cin >> three;
	cin >> four;
	cin >> five;
	cout << "Can i be honest with you?" << endl;
	cout << " I really dont care. Bye!";
	system("pause");
	cout << "peace";

	return 0;
}
