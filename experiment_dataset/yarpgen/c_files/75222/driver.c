#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3776189741U;
unsigned char var_2 = (unsigned char)61;
signed char var_6 = (signed char)-1;
unsigned short var_7 = (unsigned short)35020;
signed char var_8 = (signed char)-62;
signed char var_11 = (signed char)64;
int zero = 0;
signed char var_12 = (signed char)-23;
signed char var_13 = (signed char)-41;
short var_14 = (short)-2463;
short var_15 = (short)-32699;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
