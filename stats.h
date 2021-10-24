#include <vector>
#include <math.h>
#include <numeric.h>

struct Stats
{
    float average = NAN;
    float max = NAN;
    float min = NAN;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& data);
}
