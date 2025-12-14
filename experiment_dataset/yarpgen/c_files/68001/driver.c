#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
int var_2 = 924013883;
unsigned char var_5 = (unsigned char)46;
int var_11 = -2044856400;
short var_13 = (short)12524;
unsigned int var_15 = 2776382827U;
unsigned int var_16 = 873143206U;
unsigned long long int var_18 = 6760617005043962041ULL;
int zero = 0;
unsigned int var_19 = 3321207577U;
unsigned int var_20 = 3341816748U;
unsigned long long int var_21 = 15731823521676044540ULL;
int var_22 = -1599766771;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
