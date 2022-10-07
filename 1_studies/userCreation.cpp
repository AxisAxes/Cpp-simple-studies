#include <iostream>
#include <string>

void userDefination() {
  int age { 18 };
  std::string fullName { "" };
  std::string birthday { "" };
  std::string favoriteFood { "" };

  std::cout << "Please enter your age : ";
  std::cin >> age;
  std::cout << "Please enter your full name: " << std::endl;
  std::getline(std::cin, fullName);
  std::cout << "Plese enter your birthday: ";
  std::getline(std::cin, birthday);
  std::cout << "Plese enter your favorite food: ";
  std::getline(std::cin, favoriteFood);
  std::cout << "Welcome: " << fullName << "\n";
  std::cout << "Age: "<< age << "\n" << "birthday: "<< birthday << "\n";
  std::cout << "Favorite food: " << favoriteFood;

}

int main (int argc, char *argv[])
{
  userDefination();
  return 0;
}
