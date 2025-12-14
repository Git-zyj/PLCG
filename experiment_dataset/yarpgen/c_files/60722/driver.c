#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4741;
signed char var_2 = (signed char)-125;
unsigned short var_4 = (unsigned short)26410;
unsigned int var_5 = 1767533512U;
int var_9 = 1925923449;
signed char var_10 = (signed char)30;
int zero = 0;
short var_11 = (short)-8328;
short var_12 = (short)-4473;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
