#include <iostream>
#include <stdio.h>

using namespace std;

int main() {    

int n = 3 ;
int p;

cin >> p;
bool fin = false;

while(!fin) {
 cout <<n << " ";
 if (n == p) fin = true;
 n++;
 }
 
return 0;

}