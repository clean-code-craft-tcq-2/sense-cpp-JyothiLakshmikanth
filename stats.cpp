#include "stats.h"

float findAverage(const std::vector<float>& givenData)
{
    float totalSum=0;
    size_t dataSize = givenData.size();
    ::std::vector<float>::const_iterator givenDataIt = givenData.begin();
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        totalSum = totalSum + *givenDataIt;
    }
    return static_cast<float>(totalSum/dataSize);
}

float finMax(const std::vector<float>& givenData)
{
    ::std::vector<float>::const_iterator givenDataIt = givenData.begin();
    float maxValue = *givenDataIt;
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        if(maxValue < *(++givenDataIt))
        {
            maxValue = *(++givenDataIt);
        }
    }
   return maxValue;
}

float finMin(const std::vector<float>& givenData)
{
    ::std::vector<float>::const_iterator givenDataIt = givenData.begin();
    float minValue = *givenDataIt;
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        if(minValue > *(++givenDataIt))
        {
            minValue = *(++givenDataIt);
        }
    }
    return minValue;
}

Stats Statistics::ComputeStatistics(const std::vector<float>& givenData) 
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
