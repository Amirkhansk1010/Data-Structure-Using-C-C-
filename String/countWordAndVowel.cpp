#include <iostream>
using namespace std;

int main() {
    char ch[] = "How are   you";
    int vCount=0,wCount=1;

    for(int i=0; ch[i]!='\0'; i++) {
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' ||  ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] =='O' || ch[i] == 'u' || ch[i] == 'U') {
            vCount++;
        }

        if(ch[i] == ' ' && ch[i-1] != ' ') {
            wCount++;
        }
    }

    cout<<"Total Vowel: "<<vCount<<endl;
    cout<<"Total Word: "<<wCount;

    return 0;
}