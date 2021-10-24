#include "stats.h"
#include <algorithm>

float findAverage(const std::vector<float>& givenData)
{
    float totalSum=0;
    int dataSize = givenData.size();
    ::std::vector<float>::const_iterator givenDataIt = givenData.begin();
    for(;givenDataIt != givenData.end(); ++givenDataIt)
    {
        totalSum += *givenDataIt;
    }
    return (totalSum/static_cast<float>(dataSize));
}

Stats Statistics::ComputeStatistics(const std::vector<float>& givenData) 
{
    //Implement statistics here
    struct Stats obj1;
    if(!givenData.empty())
    {
        obj1.average = findAverage(givenData);
        obj1.max = *max_element(givenData.begin(), givenData.end());
        obj1.min = *min_element(givenData.begin(), givenData.end());
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
