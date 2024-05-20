#include <iostream>

class Car {
 private:
  int fuelGauge;

 public:
  /**
   * @brief Construct a new Car object
   *
   * @param fuel
   */
  Car(int fuel);

  /**
   * @brief Show Car object states
   *
   */
  void ShowCarState();
};

/**
 * @brief Construct a new Car:: Car object
 *
 * @param fuel
 */
Car::Car(int fuel) : fuelGauge(fuel) {}

void Car::ShowCarState() {
  std::cout << "remain fuel : " << fuelGauge << std::endl;
}

class Truck : public Car {
 private:
  int freightWeight;

 public:
  /**
   * @brief Construct a new Truck object
   *
   * @param fuel
   * @param weight
   */
  Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) {}

  /**
   * @brief
   *
   */
  void ShowTruckState() {
    ShowCarState();
    std::cout << "화물의 무게 : " << freightWeight << std::endl;
  }
};

int main(void) {
  Car *c1 = new Truck(80, 200);
  Truck *t1 = static_cast<Truck *>(c1);
  t1->ShowTruckState();

  Car *c2 = new Car(100);
  Truck *t2 = static_cast<Truck *>(c2);
  t2->ShowTruckState();

  return 0;
}