#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11583;
short var_2 = (short)-16704;
signed char var_9 = (signed char)-103;
unsigned short var_10 = (unsigned short)56178;
signed char var_11 = (signed char)38;
unsigned int var_12 = 2970976103U;
unsigned short var_13 = (unsigned short)40378;
int zero = 0;
short var_14 = (short)20198;
short var_15 = (short)-5108;
void init() {
}

void checksum() {
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
