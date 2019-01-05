#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
unsigned char ShiftLeft(unsigned char a);
unsigned char ShiftRight(unsigned char a);
void SaveToFile(std::string& data1, std::string& data2, const std::string& filename);
void Encryption(std::string& data1, std::string& data2);
void Decryption(std::string& data1, std::string& data2);
void LoadFromFile(const std::string& filename1, const std::string& filename2, const int& a);