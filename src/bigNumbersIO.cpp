#include "bigNumbersIO.h"

std::string GetStringNumber(short *num, size_t numLen) {
    std::string strNum;
    bool isNumStart = false;
    for (int i = numLen - 1; i >= 0; --i) {
        if (!isNumStart && num[i] == 0) {
            continue;
        }
        if (!isNumStart) {
            isNumStart = true;
        }
        strNum += std::to_string(num[i]);
    }
    return strNum;
}