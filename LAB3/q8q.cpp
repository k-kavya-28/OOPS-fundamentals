// CODE
#include <iostream>
using namespace std;
struct date
{
    int date;
    int month;
    int year;
};
date read()
{
    date m;
cout<<"Enter the date, followed by the month, followed by the year(DD/MM/YYYY)"<<endl; 
cin>>m.date>>m.month>>m.year;
return m;
}
int check(date a)
{
    if (a.month < 1 || a.month > 12)
        return 0;
    if ((a.month == 2) && (a.year % 4 != 0))
    {
        if (a.date <= 28)
            return 1;
        else
            return 0;
    }
    else if ((a.month == 2) && (a.year % 4 == 0))
    {
        if (a.date <= 29)
            return 1;
        else
            return 0;
    }
    else if ((a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 ||
              a.month == 10 || a.month == 12))
    {
        if (a.date <= 31)
            return 1;
        else
            return 0;
    }
    else if ((a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11))
    {
        if (a.date <= 30)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int x, y = 1;
    struct date a;
    while (y == 1)
    {
        cout << "Enter a date" << endl;
        a = read();
        cout << "Validating date" << endl;
        x = check(a);
        if (x == 0)
            cout << "The date entered is invalid." << endl;
        else if (x == 1)
            cout << "The date entered is valid." << endl;
        cout << "Do you want to continue? Type 1 for Yes/0 for No: ";
        cin >> y;
    }
    cout << "Thank you!";
    return 0;
}