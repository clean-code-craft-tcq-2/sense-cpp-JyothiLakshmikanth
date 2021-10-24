#include <vector>

struct Stats
{
    float average = 0.0;
    float max = 0.0;
    float min = 0.0;
}obj1;

namespace Statistics {
    template <typename T>
    Stats ComputeStatistics(const std::initializer_list<T>& );
}
