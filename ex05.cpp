#include <iostream>

using namespace std;

class FruitSeller {
private:
    int applePrice;
    int numOfApples;
    int myMoney;

public:
    FruitSeller(int price, int num, int money)
        : applePrice(price), numOfApples(num), myMoney(money) {}

    int getApplePrice() const {
        return applePrice;
    }

    int getNumOfApples() const {
        return numOfApples;
    }

    int getSellerMoney() const {
        return myMoney;
    }

    int sellApples(int money) {
        int num = money / applePrice; 
        if (numOfApples < num) {
            num = numOfApples;
        }
        numOfApples -= num;
        myMoney += num * applePrice;
        return num;
    }
};

class FruitBuyer {
private:
    int myMoney;
    int numOfApples;

public:
    FruitBuyer(int money, int num)
        : myMoney(money), numOfApples(num) {}
    
    void showBuyerInfo() const {
        cout << "How much money remains: " << myMoney << endl;
        cout << "How many apples: " << numOfApples << endl;
    }

    void buyApples(FruitSeller& seller, int num) {
        int totalCost = num * seller.getApplePrice();
        if (totalCost > myMoney) {
            cout << "Not enough money." << endl;
            return;
        }
        
        int numBought = seller.sellApples(totalCost);
        numOfApples += numBought; 
        myMoney -= totalCost;
        cout << numBought << " apples bought." << endl;
    }
};

int main() {
    FruitSeller seller(2000, 20, 0);
    FruitBuyer buyer(40000, 0);

    int choice = 0;
    while (true) {
        cout << "\nMenu" << endl;
        cout << "1. How much is an apple?" << endl;
        cout << "2. How many apples remain?" << endl;
        cout << "3. How much money does the seller have?" << endl;
        cout << "4. Show buyer info" << endl;
        cout << "5. Buy apples" << endl;
        cout << "Exit >> 0" << endl;
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
        case 1:
            cout << "Apple price is: " << seller.getApplePrice() << " won" << endl;
            break;
        case 2:
            cout << "Apples remaining: " << seller.getNumOfApples() << endl;
            break;
        case 3:
            cout << "Seller's money: " << seller.getSellerMoney() << " won" << endl;
            break;
        case 4:
            buyer.showBuyerInfo();
            break;
        case 5: {
            int num;
            cout << "How many apples do you want to buy?" << endl;
            cin >> num;
            buyer.buyApples(seller, num);
            break;
        }
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}
