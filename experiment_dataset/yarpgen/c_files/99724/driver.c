#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5466112528549241459LL;
int var_5 = 913966802;
short var_7 = (short)-17336;
unsigned short var_8 = (unsigned short)56605;
int var_10 = -759022378;
int zero = 0;
unsigned int var_11 = 1829396813U;
unsigned long long int var_12 = 17066916391198460258ULL;
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
