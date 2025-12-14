#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3627703132U;
unsigned char var_2 = (unsigned char)194;
unsigned char var_4 = (unsigned char)247;
long long int var_6 = -5830061265475942590LL;
short var_14 = (short)1466;
int zero = 0;
unsigned char var_18 = (unsigned char)97;
short var_19 = (short)-25981;
unsigned char var_20 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
