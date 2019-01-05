#include "header.hpp"
void Encryption(std::string& data1, std::string& data2) 
{
    int N = 16;
    std::string key = "45ab";
    int K = 32;
    int R = 11;
    long long M = pow(2, K) - 1;
    for (size_t i = 0; i < 4; ++i) {
        for (size_t j = 0; j < N; ++j) {
            data1[i] = data1[i] ^ key[i];
            data2[i] = ShiftLeft(data2[i]);
            data2[i] = (data1[i] + data2[i]) % M;
            data1[i] = ShiftLeft(data1[i]);
            data2[i] = data2[i] ^ key[i];
            data1[i] = (data1[i] + data2[i]) % M;
        }
    }
}
void Decryption(std::string& data1, std::string& data2)
{
    int N = 16;
    std::string key = "45ab";
    int K = 32;
    int R = 11;
    long long M = pow(2, K) - 1;
    for (size_t i = 0; i < 4; ++i) {
        for (size_t j = 0; j < N; ++j) {
            data1[i] = (data1[i] - data2[i]) % M;
            data2[i] = key[i] ^ data2[i];
            data1[i] = ShiftRight(data1[i]);
            data2[i] = (data2[i] - data1[i]) % M;
            data2[i] = ShiftRight(data2[i]);
            data1[i] = key[i] ^ data1[i];
        }
    }
}