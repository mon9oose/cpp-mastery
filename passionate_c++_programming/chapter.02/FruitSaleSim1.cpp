#include <iostream>

class FruitSeller {
 private:
  int APPLE_PRICE;
  int numOfApples;
  int money;

 public:
  void InitMembers(int price, int nums, int money) {
    this->APPLE_PRICE = price;
    this->numOfApples = nums;
    this->money = money;
  }
  int SalesApples(int money) {
    int num = money / this->APPLE_PRICE;
    this->numOfApples -= num;
    this->money += money;
    return num;
  }
  void ShowSalesResult() {
    std::cout << "남은 사과 : " << this->numOfApples << std::endl;
    std::cout << "판매 수익 : " << this->money << std::endl;
  }
};

class FruitBuyer {
 private:
  int money;
  int numOfApples;

 public:
  void InitMembers(int money) {
    this->money = money;
    this->numOfApples = 0;
  }
  void BuyApples(FruitSeller *seller, int money) {
    this->numOfApples += seller->SalesApples(money);
    this->money -= money;
  }
  void ShowBuyResult() {
    std::cout << "현재 잔액 : " << this->money << std::endl;
    std::cout << "사과 개수 : " << this->numOfApples << std::endl;
  }
};

int main(void) {
  FruitSeller seller;
  seller.InitMembers(1000, 20, 0);
  FruitBuyer buyer;
  buyer.InitMembers(5000);
  buyer.BuyApples(&seller, 2000);

  std::cout << "과일 판매자의 현황" << std::endl;
  seller.ShowSalesResult();
  std::cout << "과일 구매자의 현황" << std::endl;
  buyer.ShowBuyResult();

  return 0;
}