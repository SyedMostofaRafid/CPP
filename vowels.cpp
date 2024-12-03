#include<iostream>
#include<string>
using namespace std;
int main()
{
    int numOfVowels=0;
    string vowel= "";
    cout<<"Show Vowels of:";
    getline(cin,vowel);
    for(int i=0; i<vowel.length();i++)
    {
        if((vowel[i]==('a')) || (vowel[i]==('e')) || (vowel[i]==('i')) || (vowel[i]==('o')) || (vowel[i]==('u')))
            numOfVowels=numOfVowels+1;
    }
    cout<<"Vowel Count :"<<numOfVowels<<endl;
    return 0;
}
