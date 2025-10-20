#include "Menu.hpp"
#include "Crypto.hpp"
#include "FileHandler.hpp"
#include <iostream>
#include <limits>   // 用于清除输入缓冲区

using namespace std;

void Menu::run() {
    int choice;
    do {
        cout << "\n=== 加密解密工具 ===" << endl;
        cout << "1. 文本加密" << endl;
        cout << "2. 文本解密" << endl;
        cout << "3. 退出" << endl;
        cout << "请输入选项：";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除输入缓冲区
        switch (choice) {
            case 1: textEncrypt(); break;
            case 2: textDecrypt(); break;
            case 3: cout << "退出程序。" << endl; break;
            default: cout << "无效选项，请重新输入。" << endl;
        }
        
    } while (choice != 3);

}
void Menu::textEncrypt() {
    string plaintext;
    int shift;
    cout << "请输入要加密的文本: ";
    getline(cin, plaintext);
    cout<<"请输入位移量:";
    cin>>shift;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string ciphertext = crypto.caesarEncrypt(plaintext,shift); 
    cout << "加密结果: " << ciphertext << endl;
}

void Menu::textDecrypt() {
    string ciphertext;
    int shift;
    cout << "请输入要解密的文本: ";
    getline(cin, ciphertext);
    cout<<"请输入密钥:";
    cin>>shift;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string plaintext = crypto.caesarDecrypt(ciphertext,shift); 
    cout << "解密结果: " << plaintext << endl;}