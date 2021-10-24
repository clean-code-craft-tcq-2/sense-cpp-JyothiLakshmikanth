#include <vector>
#include <math.h>
#include <numeric>

struct Stats
{
    float average = NAN;
    float max = NAN;
    float min = NAN;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& data);
}
