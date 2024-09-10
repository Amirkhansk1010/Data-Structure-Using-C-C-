#include <iostream>
using namespace std;

int main() {
    char ch[] = "weLCoMe";

    for(int i=0; ch[i]!='\0'; i++) {
        if(ch[i] >= 65 && ch[i] <= 90) {
            ch[i] += 32;
        } else if(ch[i] >= 97 && ch[i] <= 122) {
            ch[i] -= 32;
        }
    }

    cout<<"After changing case: "<<ch;

    return 0;
}