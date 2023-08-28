#include "difference_of_squares.h"

namespace difference_of_squares {
    unsigned int square_of_sum(unsigned int number)
    {
        unsigned int sum = (number * (number + 1)) / 2;
        return sum * sum;
    }
    unsigned int sum_of_squares(unsigned int number)
    {
        return (number * (number + 1) * ((number * 2) + 1)) / 6;
    }
    unsigned int difference(unsigned int number)
    {
        return square_of_sum(number) - sum_of_squares(number);
    }

}  // namespace difference_of_squares


