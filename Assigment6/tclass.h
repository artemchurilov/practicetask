/* Artem Churilov st130184@student.spbu.ru
   6 task "Templates"
*/
#ifndef TCLASS_H
#define TCLASS_H

#include <vector>

template<typename T>
class MyTemplateClass
{
public:
    MyTemplateClass(T obj, int num, std::vector<float> vec)
        : obj(obj), number(num), vec(vec) {}
    bool foo()
    {
        return obj.bar(number, vec);
    }
private:
    T obj;
    int number;
    std::vector<float> vec;
};

template<>
class MyTemplateClass<int>
{
public:
    MyTemplateClass(int obj, int num, std::vector<float> vec)
        : obj(obj),number(num), vec(vec) {}
    bool foo()
    {
        return true;
    }

private:
    int obj;
    int number;
    std::vector<float> vec;
};

template<>
class MyTemplateClass<double>
{
public:
    MyTemplateClass(double obj, int num, std::vector<float> vec)
        : obj(obj),number(num), vec(vec) {}

    bool foo()
    {
        return false;
    }

private:
    double obj;
    int number;
    std::vector<float> vec;
};

#endif
