#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  int box = 250;
  int sideLine = 100;
  int premium = 50;
  int generalAd = 25;
  int ticketSold = 0;
  double ticketPrice = 0.0;
  int totalTicket = 0;
  int saleAmt = 0;

  ifstream myFile("data.txt");

  while (myFile >> ticketPrice >> ticketSold)
  {
    totalTicket += ticketSold;
    saleAmt += (ticketSold * ticketPrice);

    if (ticketPrice == box)
    cout << "Box -" << setw(24) << setprecision(2) << fixed << "$" << ticketPrice << setw(11)<<ticketSold << endl;

    else if (ticketPrice == sideLine)
    cout << "Sideline -" << setw(19) << "$" << ticketPrice << setw(11) << ticketSold << endl;

    else if (ticketPrice == premium)
    cout << "premium -" << setw(21) << "$" << ticketPrice << setw(11) <<ticketSold << endl;

    else if (ticketPrice == generalAd)
    cout << "General Admission -" << setw(11) << "$" << ticketPrice << setw(11) << ticketSold << endl;

  }

  cout << "Number of tickets sold = " << totalTicket << endl;
  cout << "Sale amount = $" << saleAmt << endl;


return 0;
}
