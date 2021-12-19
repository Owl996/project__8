// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "russian");
    std::string str("Заменяем все вхождения ДЛЯ МЕНЯ строки на другую. Не хватает ДЛЯ МЕНЯ ложки.");
    std::string findstr = "ДЛЯ МЕНЯ";
    std::string replacestr = "одной";
    std::string::size_type index;
    while ((index = str.find(findstr)) != std::string::npos)
        str.replace(index, findstr.size(), replacestr);
    std::cout << str << std::endl;
    return 0;
}