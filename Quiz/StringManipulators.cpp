#include <string>
#include <algorithm>

#include "StringManipulators.h"

std::string Remove_question_no(std::string& line, char& question_start)
{
    const auto pos = line.find(question_start);
    if (pos != std::string::npos) 
    {
        line = line.substr(0, pos);
    }
    return line;
}

std::string Replace(std::string& line, char& delim)
{
    replace(line.begin(), line.end(), delim, ' ');
    return line;
}

std::string trim(const std::string s)
{
    std::size_t first = s.find_first_not_of("\"");
    std::size_t last = s.find_last_not_of("\";\\");
    return s.substr(first, (last - first + 1));
}
