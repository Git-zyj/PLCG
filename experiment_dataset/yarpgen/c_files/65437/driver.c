#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24735;
unsigned short var_8 = (unsigned short)55633;
signed char var_10 = (signed char)-127;
unsigned short var_11 = (unsigned short)7499;
signed char var_12 = (signed char)65;
unsigned short var_13 = (unsigned short)20123;
int zero = 0;
unsigned short var_14 = (unsigned short)36530;
unsigned short var_15 = (unsigned short)10660;
signed char var_16 = (signed char)76;
void init() {
}

void checksum() {
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
