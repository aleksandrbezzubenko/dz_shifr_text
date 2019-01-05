#include "header.hpp"
void LoadFromFile(const std::string& filename1, const std::string& filename2, const int& a)
{
    std::string data = "";
    std::string data1 = "";
    std::string data2 = "";
    setlocale(LC_ALL, "Russian");
    char buf = 0;
    std::ifstream in;
    in.open(filename1);
    if (!in.is_open()) {
        std::cout << "Ошибка: Невозможно открыть файл." << std::endl;
    }
    else {
        while (in.get(buf)) {
            data.push_back(buf);
        }
        while (data.size() % 8 != 0) {
            data.push_back(0);
        }
        int n = 0;
        for (int i = 0; i < data.size(); ++i) {
            if (data1.size() < 4) {
                data1.push_back(data[i]);
                n = i;
            }
            if ((data1.size() == 4) && (data2.size() < 4) && (i > n)) {
                data2.push_back(data[i]);
            }
            if ((data1.size() == 4) && (data2.size() == 4)) {
                if (a == 1) {
                    Encryption(data1, data2);
                    SaveToFile(data1, data2, filename2);
                }
                if (a == 2) {
                    Decryption(data1, data2);
                    SaveToFile(data1, data2, filename2);
                }
                data1 = "";
                data2 = "";
            }
        }
    }
    in.close();
}