#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main(void)
{
    float grossprice, taxrate, netprice, taxvalue;

    cout << "Enter a gross price: ";
    cin >> grossprice;
    cout << "Enter a tax rate: ";
    cin >> taxrate;

    if (grossprice <= 0.0 || taxrate < 0.0 || taxrate > 100.0)
    {
        cout << "Input data doesnt look correct." << endl;
    }
    else
    {
        netprice = grossprice / (1 + taxrate / 100); // Gross ÷ (1 + tax%) = net price
        taxvalue = grossprice - netprice;

        cout << fixed << setprecision(2); // decimal to 2
        cout << "Netprice: " << netprice << endl;
        cout << "Tax value: " << taxvalue << endl;
    }
    return 0;
}