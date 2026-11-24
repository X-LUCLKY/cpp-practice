// 第一个程序：验证工具链能编译、能运行
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "你的名字：";
    if (std::getline(std::cin, name) && !name.empty()) {
        std::cout << "Hello, " << name << "! 编译链已跑通。\n";
    } else {
        std::cout << "Hello, world! 编译链已跑通。\n";
    }
    return 0;
}
