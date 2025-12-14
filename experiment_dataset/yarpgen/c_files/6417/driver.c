#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1298728419U;
unsigned char var_5 = (unsigned char)94;
unsigned int var_8 = 1742148445U;
signed char var_9 = (signed char)-98;
int zero = 0;
short var_14 = (short)-31732;
unsigned short var_15 = (unsigned short)33156;
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
