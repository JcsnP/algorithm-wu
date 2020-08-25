#include <iostream>
using namespace std;

int main(void){
  int productCount(0), price(0), sum(0), totalPrice(0);
  cin >> productCount;

  for(int i = 1; i <= productCount; i++){
    cout << "Enter product price " << i << " :";
    cin >> price;
    sum = sum + price;
  }

  cout << "The product price is: " << sum << endl;
  cout << "Please pay your product: "
  cin >> totalPrice;

  while(totalPrice < sum){
    cout << "Your money lass than price of product" << endl;
    cout << "Please enter again: ";
    cin >> totalPrice;
  }

  if(totalPrice == sum){
    cout << "Thank You!";
  }
  if(totalPrice > sum){
    totalPrice = totalPrice - sum;
    cout << "Your Change is: " << totalPrice << " Thank You !";
  }

}
