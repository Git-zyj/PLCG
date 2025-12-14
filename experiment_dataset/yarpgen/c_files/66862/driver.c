#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)19827;
unsigned char var_15 = (unsigned char)178;
unsigned char var_16 = (unsigned char)211;
short var_17 = (short)15253;
int zero = 0;
unsigned char var_20 = (unsigned char)33;
unsigned int var_21 = 3560470559U;
short var_22 = (short)-4697;
unsigned int var_23 = 3783922327U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
