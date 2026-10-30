#pragma once

#include <iostream>

bool TrySumNumbers(short *firstNum, size_t firstNumLen, 
short *secondNum, size_t secondNumLen,
short *resultNum, size_t resultNumLen);

bool TryMulNumbers(short *firstNum, size_t firstNumLen, 
short *secondNum, size_t secondNumLen,
short *resultNum, size_t resultNumLen);

void GenerateNumber(short *num, size_t numLen);