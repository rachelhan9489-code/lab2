#include "book.h"

int main()
{
    using namespace HanYoonseo2649055;
    using namespace std;

    book b1{ inputBook() };
    printBook(b1);
    book b2{ inputBook() };
    printBook(b2);

    return 0;
}