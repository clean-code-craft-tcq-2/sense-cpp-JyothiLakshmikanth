#include <vector>
#include <math.h>
#include <numeric>

using namespace std;

struct Stats
{
    float average = NAN;
    float max = NAN;
    float min = NAN;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& data);
}

class StatsAlerter
{
    private:
    float thresholdValue = NAN;
    std::vector<IAlerter*> alerters;
    public:
    StatsAlerter (float value, std::vector<IAlerter*> a_v): thresholdValue(value), alerters(a_v){}
    void checkAndAlert(const std::vector<float>& data);
}
