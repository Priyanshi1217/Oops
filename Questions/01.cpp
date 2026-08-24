// WAP to create airline reservation which includes the private data ass passenger id, name,flight no., desetination, booking status and ticket fare. Include the different public function as add passenger, display passenger detail, book a ticket and cam=ncel a ticket.

#include  <bits/stdc++.h>
using namespace std;
class airline{

    private:
    string passid;
    string name;
    int flightno;
    string destination;
    float price;
    bool bookingStatus;

    public:
    void addPassenger()
    {
        cout << "Enter Passenger ID: ";
        cin >> passid;

        cout << "Enter Passenger Name: ";
        cin >> name;

        cout << "Enter Flight Number: ";
        cin >> flightno;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Ticket Fare: ";
        cin >> price;

        bookingStatus = false;

        cout << "Passenger added successfully!"<<endl;
    }
    void displayPassenger(){
        cout<<"--Passenger Detail--"<<endl;
        cout<<"Passenger Id: "<< passid <<endl;
        cout<<"Passenger name: "<< name <<endl;
        cout<<"Flight number: "<< flightno <<endl;
        cout << "Destination: " << destination << endl;
        cout << "Ticket Fare: " << price << endl;
        cout << "Booking Status: "
             << (bookingStatus ? "Booked" : "Not Booked") << endl;
    }
    void bookTicket()
    {
        if (!bookingStatus)
        {
            bookingStatus = true;
            cout << "\nTicket booked successfully!\n";
        }
        else
        {
            cout << "\nTicket is already booked!\n";
        }
    }

    void cancelTicket()
    {
        if (bookingStatus)
        {
            bookingStatus = false;
            cout << "\nTicket cancelled successfully!\n";
        }
        else
        {
            cout << "\nNo booked ticket to cancel!\n";
        }
    }
};
int main()
{
    airline p;
    int choice;

    p.addPassenger();

    do
    {
        cout << "\n1. Display Passenger Details";
        cout << "\n2. Book Ticket";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            p.displayPassenger();
            break;

        case 2:
            p.bookTicket();
            break;

        case 3:
            p.cancelTicket();
            break;

        case 4:
            cout << "\nThank you!\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);
}