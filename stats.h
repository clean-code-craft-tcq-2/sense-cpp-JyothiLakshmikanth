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
class IAlerter
{
public:
virtual void setEmailSend(bool value) {}
virtual void setLEDGlow(bool value) {}
};

class EmailAlert : public IAlerter
{
    public:
    bool emailSent = false;
    void setEmailSend(bool value)
    {
      emailSent = value;
    }
};
class LEDAlert : public IAlerter
{
    public:
    bool ledGlows = false;
    void setLEDGlow(bool value)
    {
       ledGlows = value;
    }
};

class StatsAlerter
{
    public:
    StatsAlerter (float value, std::vector<IAlerter*> a_v): thresholdValue(value), alerters(a_v){}
    void checkAndAlert(const std::vector<float>& data);
    private:
    float thresholdValue = NAN;
    std::vector<IAlerter*> alerters;
};


