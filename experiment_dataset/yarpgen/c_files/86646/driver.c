#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27598;
short var_1 = (short)28197;
int var_3 = -1028502275;
unsigned short var_5 = (unsigned short)2644;
unsigned int var_9 = 2193472886U;
int var_12 = 552811863;
int zero = 0;
unsigned int var_13 = 3432415630U;
unsigned int var_14 = 4074869505U;
short var_15 = (short)-26066;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
