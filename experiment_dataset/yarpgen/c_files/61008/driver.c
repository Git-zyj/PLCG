#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1521346686U;
unsigned short var_1 = (unsigned short)45232;
signed char var_3 = (signed char)72;
unsigned long long int var_5 = 4877882008918303059ULL;
unsigned int var_7 = 2024152140U;
signed char var_8 = (signed char)97;
int zero = 0;
unsigned int var_12 = 1617722114U;
int var_13 = -297701415;
unsigned int var_14 = 430700829U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
