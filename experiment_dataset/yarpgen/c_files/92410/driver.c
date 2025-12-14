#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15115;
short var_6 = (short)7870;
unsigned int var_8 = 2508876801U;
unsigned int var_9 = 287145956U;
int zero = 0;
unsigned short var_14 = (unsigned short)45048;
unsigned short var_15 = (unsigned short)3317;
short var_16 = (short)-27045;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
