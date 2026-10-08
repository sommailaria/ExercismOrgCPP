#include "raindrops.h"
#include <string>

namespace raindrops {
// TODO: add your solution here  
std::string convert(int number) {
 std::string result = "";
std::string no_sound_string = std::to_string(number);

    if (number % 3 == 0)
    {
        result.append("Pling");
    }
    if (number % 5 == 0) {
        result.append("Plang");
    }
    if (number % 7 == 0) {
        result.append("Plong");
    }
   if (result.empty()) {
       return no_sound_string;
   }
   return result;
   

}

}  // namespace raindrops
