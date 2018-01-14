/*====================================================================================================================================

NAME : MOHANAKRISHNAN.V                      GITHUB LINK :https://github.com/kicha98

CONCEPT : STRUCTURE AND FUNCTION CALLING                TIME: 6.34PM

LOCATION : CHENNAI

===================================================================================================================================*/
#include <iostream>
using namespace std;
struct buscal
{int distance;
int caldistance;
int price;
int code;
int person;
int stopcount;
int cal(int value)
{

}
};
int main ()
{ struct buscal go;
int total;go.price=2;
go.distance = 50;
cout <<"PRINT THE BUS STOP CODE\n"<<"CHENNAI TO MADURAVOYAL CODE 0\n"<<"CHENNAI TO SRIPERUMBUR CODE 1\n"<<"CHENNAI TO THIRUPPUKUZHI CODE 2\n"<<"CHENNAI TO AVALOOR CODE 3\n" <<"CHENNAI TO KAVERIPAKKAM CODE 4\n"<<"CHENNAI TO WALAJAHPET CODE 5\n"<<"CHENNAI TO RANIPET CODE 6\n"<<"CHENNAI TO VELLORE CODE 7\n"<<"CHENNAI TO AMBUR CODE 8\n"<<"CHENNAI TO MADURAVOYAL CODE 9\n"<<"CHENNAI TO KRISHNAGIRI CODE 10\n"<<"CHENNAI TO HOSUR CODE 11\n"<<"CHENNAI TO BENGALURU CODE 12\n";
cin >>go.code;
if (go.code ==0)
{go.stopcount=1;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;
go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;
cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
if (go.code ==1)
{go.stopcount=2;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;
go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==2)
{go.stopcount=3;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;
go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==3)
{ go.stopcount=4;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==4)
{go.stopcount= 5;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==5)
{go.stopcount =6;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==6)
{go.stopcount =7;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==7)
{go.stopcount = 8;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==8)
{go.stopcount = 9;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==9)
{go.stopcount= 10;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==10)
{go.stopcount= 11;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==11)
{go.stopcount= 12;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else if (go.code ==12)
{go.stopcount=13;
cout << "ENTER THE NUMBER OF PERSONS ";
cin >>go.person;go.caldistance=go.distance*go.stopcount;
total = go.price*go.caldistance*go.person;
cout<<"THE DISTANCE TRAVELLED="<<go.caldistance;
cout<<"\nTHE AMOUNT FOR TRAVEELING IS  Rs"<<total;cout<<"\nNO OF PASSENGER TRAVELLING = "<<go.person;
}
else
{
  cout<<"PLEASE ENTER THE CODE PROPERLY";
};
return 0;
}
