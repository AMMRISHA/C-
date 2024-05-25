#include<iostream>
#include<fstream>
int main ( )
{
ofstream Outf;
Outf.open( "ITEM"); // connect ITEM file to Outf
cout << "Enter Item Name";
char Name[ 30 ]; cin >> Name;
Outf << Name << "\n"; // write to file ITEM
float Cost; cin >> Cost;
Outf << Cost << "\n";
Outf.close ( ); // Disconnect ITEM file to Out
ifstream Inf ("ITEM"); // connect ITEM file to Inf
Inf >> Name; // read Name from file ITEM
Inf >> Cost;
cout << "\n";
cout << "Item Name: " << Name << "\n";
cout << "Item Cost: " << Cost << "\n";
Inf.close ( ); // Disconnect ITEM file to Inf
return 0;
} // main ( ) ends here
