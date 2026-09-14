#pragma once
//#ifndef BOOK_H
//#define BOOK_H

#include <iostream>

namespace HanYoonseo2649055
{
    //구조체 student: id, grade
    struct book
    {
        int id{};//중괄호로 초기화, ()소괄호일 경우 함수선언으로 인식
        int price{};
    };
    book inputBook();
    void printBook(const book &b);//pass-by-reference
}

//#endif