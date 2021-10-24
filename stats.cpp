#include "stats.h"
#include <algorithm>

float findAverage(const std::vector<float>& givenData)
{
    ::std::cout<<"findAverage"<<endl;
    float totalSum=0;
    int dataSize = givenData.size();
    ::std::cout<<"findAverage dataSize - "<<dataSize<<endl;
    ::std::vector<float>::const_iterator givenDataIt = givenData.begin();
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        ::std::cout<<"findAverage givenDataIt - "<<*givenDataIt<<endl;
        totalSum += *givenDataIt;
    }
    return static_cast<float>(totalSum/dataSize);
}

Stats Statistics::ComputeStatistics(const std::vector<float>& givenData) 
{
    //Implement statistics here
    struct Stats obj1;
    if(!givenData.empty())
    {
        obj1.average = findAverage(givenData);
        obj1.max = *max_element(givenData.begin(), givenData.end());
        obj1.min = *min_element(v.begin(), v.end());
    }
    return obj1;
}

/*void StatsAlerter::checkAndAlert(const std::vector<float>& data)
{
  //  EmailAlert emailAlert;
    //LEDAlert ledAlert;
    struct Stats statistics = Statistics::ComputeStatistics(data);
    float maxValue = statistics.max;
    if(thresholdValue < maxValue)
    {
       // emailAlert.setAlert(true);
        //ledAlert.setAlert(true);
    }
}*/
