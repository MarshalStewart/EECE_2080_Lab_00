// whattotest.cpp

#include "whattotest.h"
 
WidgetWithArrays::WidgetWithArrays() : m_count(0)
{
    
}

 
void WidgetWithArrays::storeInteger(int a)
{
    m_array[m_count%100] = a;
    m_count++;

}

int WidgetWithArrays::sum()
{
    int retVal = 0;
    for (int n : m_array)
        retVal += n;

    return retVal;
}
 

WidgetWithVector::WidgetWithVector()
{


}

void WidgetWithVector::storeInteger(int a)
{
    m_vector.push_back(a);

}

int WidgetWithVector::sum()
{
    int retVal = 0;

    for(int n : m_vector)
    {
        retVal = retVal +n;
    }


    return retVal;
}
 


