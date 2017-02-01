#include <iostream>

using namespace std;

int main()
{
   int x;
    
   cout << " Ievadi skaitli, kuru velies kapinat kvadrata " << endl; 
   
   cin >> x ;
   
   if (x > 0){
       // sis izpildisies, ja x ir lielaks par 0
       cout << "x ir lielaks par 0" << endl;
       cout << " rezultats ir " << x*x << " !" << endl;
   }else{
       // sis izpildisies, ja x nav lielaks par 0
       cout << "x ir mazaks par 0 un man nepatik negativi skaitli" << endl;
   }
   
   
   return 0;
}

