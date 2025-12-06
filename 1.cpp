#include <iostream>

using namespace std;

int main()
{
    int N;

    cout<<"Enter Number Of Passengers: ";
    cin>> N;

    double weight, extra, charge;
    double totalRevenue = 0;

    for (int i = 1; i <= N; i++) {

        cout<<"\nEnter baggage weight for passenger " << i << ": ";
        cin>> weight;

        if (weight <= 15) {

            charge = 0;
            cout<<"Charge: Rs. " << charge << endl;
        }
        else {
            extra = weight - 15;
            charge = extra * 90;
            totalRevenue += charge;

            cout<< "Extra Weight: " << extra << " kg" <<endl;
            cout<< "Charge: Rs. " << charge <<endl;

            if (extra > 10) {
                cout<< "Overweight Baggage" <<endl;
            }
        }
    }

    cout << "\n Total Baggage Revenue = Rs. " << totalRevenue <<endl;

    return 0;
}