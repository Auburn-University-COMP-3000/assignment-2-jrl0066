#include <iostream>
using namespace std;

void computeCoin(int coinValue, int& number, int& amountLeft){

    cout << "\nCoins can be given as: " << endl;
    number = coinValue/25;

    cout << number << " quarters." << endl;
    amountLeft = coinValue-(25*number);
    number = amountLeft/10;

    cout << number << " dimes." << endl;
    amountLeft = amountLeft-(10*number);

    cout << amountLeft << " pennies." << endl;

}
int main(){

    int amount;
    int number;
    int amountLeft;
    char response;

    do{

        do{

            cout << "Enter an amount of change between 1 and 99: ";
            cin >> amount;

        } while (amount <1 || amount > 99);
        
        computeCoin(amount, number, amountLeft);
        cout << "\nDo you want to calculate more change?";
        cout << "\nPress Y to continue and N to exit: ";
        cin >> response;

    }while (response == 'Y' || response == 'y');
    return 0;

}