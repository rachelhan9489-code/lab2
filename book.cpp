#include "book.h"

namespace HanYoonseo2649055
{
    book inputBook()
    {
        book b{};//{}중괄호로 초기화
        std::cout << "Enter book id: ";
        std::cin >> b.id;
        std::cout << "Enter book price: ";
        std::cin >> b.price;
        return b;
    }
    void printBook(const book &b)//pass-by-reference
    {
        std::cout << "book id: " << b.id << std::endl;
        std::cout << "book price: " << b.price << std::endl;
    }
}