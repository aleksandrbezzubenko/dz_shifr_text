#include"header.hpp"
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "����:" << std::endl
        << "1. ���������� �����" << std::endl
        << "2. ������������� �����" << std::endl
        << "3. ������" << std::endl
        << "4. �����" << std::endl
        << "������� ����� ������� ������ ���� � ������� Enter: ";
    int a = 0;
    std::cin >> a;
    if ((a < 1) || (a > 4)) {
        std::cout << "������: ����� �������������� ����� ����." << std::endl;
        //return 0;
    }
    if (a == 1) {
        std::string filename_text = "";
        std::string filename_crypt = "";
        std::cout << "������� ���� �� �����: ";
        std::cin >> filename_text;
        std::cout << "������� ���� �� ��������� �����: ";
        std::cin >> filename_crypt;
        std::cout << std::endl;
        LoadFromFile(filename_text, filename_crypt, a);
    }
    if (a == 2) {
        std::string filename_crypt = "";
        std::string filename_text = "";
        std::cout << "������� ���� �� �������������� �����: ";
        std::cin >> filename_crypt;
        std::cout << "������� ���� �� ��������� �����: ";
        std::cin >> filename_text;
        std::cout << std::endl;
        LoadFromFile(filename_crypt, filename_text, a);
    }
    if (a == 3) {
        std::string str = "";
        std::ifstream in;
        in.open("help.txt");
        if (in.is_open()) {
            while (getline(in, str)) {
                std::cout << str << std::endl;
            }
        }
    }
    if (a == 4) {
        return 0;
    }
    system("pause");
}