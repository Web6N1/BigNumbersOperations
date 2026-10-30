#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include <format>

#include "src/bigNumbersOperations.h"
#include "src/bigNumbersIO.h"

#define FIRST_NUM_LEN       5
#define SECOND_NUM_LEN      4
#define RESULT_NUM_LEN      6

int main()
{
    srand(time(NULL));

    short firstNum[FIRST_NUM_LEN];
    short secondNum[SECOND_NUM_LEN];
    short resultNum[RESULT_NUM_LEN] = {};

    GenerateNumber(firstNum, FIRST_NUM_LEN);
    GenerateNumber(secondNum, SECOND_NUM_LEN);

    if (!TrySumNumbers(firstNum, FIRST_NUM_LEN, secondNum, SECOND_NUM_LEN, resultNum, RESULT_NUM_LEN)) {
        std::cout << "Can't calculate sum" << std::endl;
    } else {
        std::string firstNumStr = GetStringNumber(firstNum, FIRST_NUM_LEN);
        std::string secondNumStr = GetStringNumber(secondNum, SECOND_NUM_LEN);
        std::string resultNumStr = GetStringNumber(resultNum, RESULT_NUM_LEN);
        std::cout << std::format("{} + {} = {}", firstNumStr, secondNumStr, resultNumStr) << std::endl;
    }

    return 0;
}