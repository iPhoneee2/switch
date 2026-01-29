#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    switch(s)
    {
        case 01: cout<<"город Астана"; break;
        case 02: cout<<"город Алматы"; break;
        case 03: cout<<"Акмолинская область"; break;
        case 04: cout<<"Актюбинская область"; break;
        case 12: cout<<"Мангистауская область"; break;
        default: cout<<"Нет такого";
    }
    return 0;
}