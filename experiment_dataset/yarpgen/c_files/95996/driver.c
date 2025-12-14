#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7739188615367369628ULL;
unsigned long long int var_1 = 14317797046197455039ULL;
unsigned int var_2 = 591517692U;
unsigned long long int var_3 = 5194259887670385719ULL;
unsigned short var_6 = (unsigned short)56485;
unsigned int var_9 = 57278498U;
int var_10 = 1613922625;
short var_11 = (short)21243;
int zero = 0;
unsigned long long int var_12 = 8685772063072198198ULL;
int var_13 = 1490273790;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
