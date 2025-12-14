#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16479;
unsigned short var_3 = (unsigned short)27842;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)238;
short var_13 = (short)12166;
int zero = 0;
unsigned char var_15 = (unsigned char)216;
unsigned short var_16 = (unsigned short)18898;
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
