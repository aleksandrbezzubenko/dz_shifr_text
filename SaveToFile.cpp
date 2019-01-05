#include "header.hpp"
void SaveToFile(std::string& data1, std::string& data2, const std::string& filename)
{
    std::ofstream out;
    out.open(filename, std::ios::app);
    if (out.is_open())
    {
        for (size_t i = 0; i < data1.size(); ++i) {
            out << data1[i];
        }
        for (size_t i = 0; i < data2.size(); ++i) {
            out << data2[i];
        }
    }
}