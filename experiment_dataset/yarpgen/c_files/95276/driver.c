#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1740957184;
unsigned int var_5 = 2652947600U;
unsigned short var_9 = (unsigned short)13886;
signed char var_10 = (signed char)-82;
int zero = 0;
short var_15 = (short)-7165;
unsigned int var_16 = 1508664306U;
void init() {
}

void checksum() {
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
