#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56500;
short var_7 = (short)12867;
unsigned short var_8 = (unsigned short)46746;
signed char var_9 = (signed char)-45;
int zero = 0;
signed char var_10 = (signed char)18;
unsigned int var_11 = 2098515914U;
int var_12 = 1830055700;
unsigned char var_13 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
