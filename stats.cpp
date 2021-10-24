#include "stats.h"

template <typename T>
auto findAverage(const std::vector<T>& givenData)
{
    float totalSum=0;
    size_t dataSize = givenData.size();
    typename ::std::vector<T>::const_iterator givenDataIt = givenData.begin();
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        totalSum = totalSum + *givenDataIt;
    }
    return static_cast<float>(totalSum/dataSize);
}

template <typename T>
auto finMax(const std::vector<T>& givenData)
{
    typename ::std::vector<T>::const_iterator givenDataIt = givenData.begin();
    auto initialValue = *givenDataIt;
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        if(initialValue < *(++givenDataIt))
        {
            initialValue = *(++givenDataIt);
        }
    }
   return initialValue;
}
template <typename T>
auto finMin(const std::vector<T>& givenData)
{
    typename ::std::vector<T>::const_iterator givenDataIt = givenData.begin();
    auto initialValue = *givenDataIt;
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        if(initialValue > *(++givenDataIt))
        {
            initialValue = *(++givenDataIt);
        }
    }
    return initialValue;
}

template <typename T>
Stats Statistics::ComputeStatistics(const std::vector<T>& givenData) 
{
    //Implement statistics here
    struct Stats obj1;
    if(!givenData.empty())
    {
        obj1.average = findAverage(givenData);
        obj1.max = finMax(givenData);
        obj1.min = finMin(givenData);
    }
    return obj1;
}
