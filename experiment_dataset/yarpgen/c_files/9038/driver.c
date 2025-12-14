#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42273;
unsigned int var_3 = 1095574123U;
short var_6 = (short)11874;
unsigned int var_9 = 613707789U;
unsigned long long int var_10 = 4159610409947617950ULL;
signed char var_14 = (signed char)97;
int zero = 0;
unsigned short var_16 = (unsigned short)43695;
unsigned short var_17 = (unsigned short)23863;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
