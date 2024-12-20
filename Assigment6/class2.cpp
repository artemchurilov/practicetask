/* Artem Churilov st130184@student.spbu.ru
   6 task "Templates"
*/

#include <iostream>
#include "class2.h"


bool Class2::bar(int number, std::vector<float>& vec) {
  return !vec.empty();
};

int Class2::c_2_1() {
  return 6; 
};

float Class2::c_2_2() {
  return 20.12f;
};

void Class2::c_2_3() {
  std::cout << "Class2: Artem Churilov"<<std::endl;
};

