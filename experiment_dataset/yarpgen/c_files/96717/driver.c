#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)36630;
short var_7 = (short)23159;
unsigned short var_8 = (unsigned short)58493;
int zero = 0;
unsigned int var_10 = 28240693U;
int var_11 = 1315865774;
signed char var_12 = (signed char)-25;
signed char var_13 = (signed char)-107;
short var_14 = (short)-29404;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
