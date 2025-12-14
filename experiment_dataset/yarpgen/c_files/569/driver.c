#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1584512072U;
unsigned int var_7 = 1931847119U;
signed char var_8 = (signed char)-23;
unsigned int var_10 = 3020188295U;
int zero = 0;
unsigned long long int var_11 = 1170409298067141998ULL;
unsigned short var_12 = (unsigned short)64343;
unsigned int var_13 = 2919650097U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
