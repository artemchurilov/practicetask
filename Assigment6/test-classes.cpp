#include <iostream>
#include "class1.h"
#include "class2.h"
#include "class3.h"
#include "tclass.h"
#include <gtest/gtest.h>
#include <vector>

int main(int argc, char **argv) 
{
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}

TEST(Class1, WaitTrue)
{
  std::vector<float> nullV;
  Class1 exp;
  MyTemplateClass<Class1> e(exp, 5, nullV);
  EXPECT_TRUE(e.foo());
}
TEST(Class1, WaitFalse)
{
  std::vector<float> nullV;
  Class1 exp;
  MyTemplateClass<Class1> e(exp, -5, nullV);
  EXPECT_FALSE(e.foo());
}

TEST(Class2, WaitTrue)
{
  std::vector<float> nenullV = {20.12};
  Class2 exp;
  MyTemplateClass<Class2> e(exp, 5, nenullV);
  EXPECT_TRUE(e.foo());
}
TEST(Class2, WaitFalse)
{
  std::vector<float> nullV = {};
  Class2 exp;
  MyTemplateClass<Class2> e(exp, 5, nullV);
  EXPECT_FALSE(e.foo());
}

TEST(Class3, WaitTrue)
{
  std::vector<float> nullV = {20.12,20.24};
  Class3 exp;
  MyTemplateClass<Class3> e(exp, -2, nullV);
  EXPECT_TRUE(e.foo());
}
TEST(Class3, WaitFalse)
{
  std::vector<float> nullV = {20.12};
  Class3 exp;
  MyTemplateClass<Class3> e(exp, 5, nullV);
  EXPECT_FALSE(e.foo());
}


TEST(Special, Int)
{
    EXPECT_FALSE(false);
}
TEST(Special, Double)
{
    EXPECT_FALSE(false);
}
