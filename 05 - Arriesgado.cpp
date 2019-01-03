#include <iostream>
using namespace std;
void linechar(int ast){
	cout<<string(ast,'*')<<endl<<endl;}
void linechar(int ast, int at){
	cout<<string(at+ast, '@')<<endl<<endl;}
void linechar(int ast, int at, int hash){
	cout<<string(at+ast+hash, '#')<<endl<<endl;}
int main(){
	linechar(20);
	linechar(10,10);
	linechar(10);
	linechar(5,5,5);}
