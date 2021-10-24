#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& givenData) {
    //Implement statistics here
    float average, max, min, totalSum=0;
    size_t dataSize = givenData.size();
    void findAverage()
    {
        totalSum = findSum();
        average = static_cast<float>(totalSum/dataSize);
    }
    
    float findSum()
    {
        float sum = 0;
        std::vector<___>::const_iterator givenDataIt = givenData.begin();
        for(;givenDataIt != givenData.end(); ++givenDataIt)
        {
            sum = sum + *givenDataIt;
        }
        return sum;
    }
    void finMax()
    {
        std::vector<___>::const_iterator givenDataIt = givenData.begin();
        auto initialValue = *givenDataIt;
        for(;givenDataIt != givenData.end(); ++givenDataIt)
        {
            if(initialValue < *(++givenDataIt))
            {
                initialValue = *(++givenDataIt);
            }
        }
        max = initialValue;
    }
     void finMin()
    {
        std::vector<___>::const_iterator givenDataIt = givenData.begin();
        auto initialValue = *givenDataIt;
        for(;givenDataIt != givenData.end(); ++givenDataIt)
        {
            if(initialValue > *(++givenDataIt))
            {
                initialValue = *(++givenDataIt);
            }
        }
        min = initialValue;
    }
}
