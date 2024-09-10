#include <iostream>
using namespace std;

int main() {
    char ch[] = "India";
    int i;

    for(i=1; ch[i]!='\0'; i++) {}

    cout<<"Length of a string is: "<<i<<endl;
}