#pragma once
#include<iostream>
#include<string>
using namespace std;
class Review
{private: 
	string Menuname, body;
public:
	Review(string Menuname = "", string body = "");
	string GetMenuname();
	string Getbody();

};

