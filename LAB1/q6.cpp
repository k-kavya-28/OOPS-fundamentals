#include <iostream>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("Hi.txt", "r");
    cout << "Good Evening"<<endl<<"Hi\n";
    cout << "T\bhere is a\t big party." << getw(fp);
    fclose(fp);
    return 0;
}