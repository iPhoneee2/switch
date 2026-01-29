#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    switch(s)
    {
        case 1: cout<<"Общие положения"; break;
        case 2: cout<<"Человек и гражданин"; break;
        case 3: cout<<"Президент"; break;
        case 4: cout<<"Парламент"; break;
        case 5: cout<<"Правительство"; break;
        default: cout<<"Нет такого";
    }
    return 0;
}