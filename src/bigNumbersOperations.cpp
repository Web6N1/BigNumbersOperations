#include <cstdlib>
#include "bigNumbersOperations.h"

bool TrySumNumbers(short *firstNum, size_t firstNumLen, 
short *secondNum, size_t secondNumLen,
short *resultNum, size_t resultNumLen) {
    size_t maxLen = std::max(firstNumLen, secondNumLen);
    if (resultNumLen < maxLen+1) {
        return false;
    }

    for (int i = 0; i < maxLen; ++i) {
        short digitsSumResult {};
        if (i < firstNumLen) {
            digitsSumResult += firstNum[i];
        }
        if (i < secondNumLen) {
            digitsSumResult += secondNum[i];
        }

        digitsSumResult += resultNum[i];
        resultNum[i] = digitsSumResult % 10;
        resultNum[i+1] += digitsSumResult / 10;
    }

    return true;
}

bool TryMulNumbers(short *firstNum, size_t firstNumLen, 
short *secondNum, size_t secondNumLen,
short *resultNum, size_t resultNumLen) {
    if (resultNumLen < firstNumLen + secondNumLen) {
        return false;
    }

    for (int i = 0; i < firstNumLen; ++i) {
        for (int j = 0; j < secondNumLen; ++j) {
            short digitsMulResult = firstNum[i] * secondNum[j];
            digitsMulResult += resultNum[i+j];

            resultNum[i+j] = digitsMulResult % 10;
            resultNum[i+j+1] += digitsMulResult / 10;
        }
    }

    return true;
}

void GenerateNumber(short *num, size_t numLen) {
    for (int i = 0; i < numLen-1; ++i) {
        num[i] = rand() % 10;
    }
    num[numLen-1] = (rand() % 9) + 1;
}