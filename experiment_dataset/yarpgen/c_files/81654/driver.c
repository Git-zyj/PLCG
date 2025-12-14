#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1282783144U;
unsigned int var_5 = 1347446132U;
unsigned short var_6 = (unsigned short)38178;
unsigned short var_7 = (unsigned short)65409;
short var_8 = (short)6610;
unsigned int var_9 = 3652376618U;
int var_10 = -1085285317;
unsigned int var_11 = 106419075U;
int zero = 0;
signed char var_13 = (signed char)-71;
signed char var_14 = (signed char)31;
void init() {
}

void checksum() {
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
