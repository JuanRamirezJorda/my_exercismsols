#include "raindrops.h"
#include <string>
namespace raindrops {
    std::string convert(int num){
        std::string output = "";

        if (num % 3 == 0) {output += "Pling";}
        if (num % 5 == 0) {output += "Plang";}
        if (num % 7 == 0) {output += "Plong";}

        return output.empty() ? std::to_string(num) : output;
    }
}  // namespace raindrops