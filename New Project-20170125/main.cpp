#include <iostream>

using namespace std;

int main()
{  
    
int x;
int y;
int rez1;
int rez2;
int rez3;
int rez4;
int rez5;

cout << " ievadi x " << endl;
cin >> x;
cout << " ievadi y " << endl;
cin >> y;

rez1 = y + 3;
rez2 = y - 2;
rez3 = y * 5;
rez4 = x / y;

cout << " skaitlu " << y << " un " << 3 << " summa ir " << rez1 << endl;
cout << " skaitlu " << y << " un " << 2 << " starpiba ir " << rez2 << endl;
cout << " skaitlu " << y << " un " << 5 << " reizinajums ir " << rez3 << endl;
cout << " skaitlu " << x << " un " << y << " dalijums ir " << rez4 << endl;

   return 0;
}

