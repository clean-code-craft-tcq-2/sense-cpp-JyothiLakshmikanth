#include <vector>

struct Stats
{
    float average = NAN;
    float max = NAN;
    float min = NAN;
};

namespace Statistics {
    template <typename T>
    Stats ComputeStatistics(const std::vector<T>& data);
}
