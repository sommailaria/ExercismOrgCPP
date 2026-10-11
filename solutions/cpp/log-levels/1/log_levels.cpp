#include <string>

namespace log_line {
std::string message(std::string line) {
   int find_message_index = line.find(": ");
   std::string message_text = line.substr(find_message_index + 2);
   return message_text;
   
    
}

std::string log_level(std::string line) {
    int find_message_index = line.find("]");
   std::string level_message = line.substr(1, find_message_index - 1);
   return level_message;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string complete_message = message(line) + " " + "(" + log_level(line) + ")";
    return complete_message;
}
}  // namespace log_line
