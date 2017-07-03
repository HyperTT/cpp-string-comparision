#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "== String Compare ==\n";
    cout << "Enter a word\n";
    cin >> s1;
    cout << "Enter another word\n";
    cin >> s2;
    if (s1 < s2)
    {
        cout <<"\""<<s1<<"\" comes before \""
            <<s2<<"\""<<".\n";
    }
    else if (s1 > s2)
    {
        cout <<"\""<<s1<<"\" comes after \""
             <<s2<<"\""<<".\n";
    }
    else if (s1 == s2)
    {
        cout<<"Words are exactly the same.\n";
    }
    return 0;
}
