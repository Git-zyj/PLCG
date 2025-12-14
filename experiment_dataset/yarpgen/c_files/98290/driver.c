#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55409;
unsigned char var_2 = (unsigned char)136;
int var_6 = 511175388;
unsigned char var_7 = (unsigned char)225;
unsigned short var_10 = (unsigned short)54865;
int zero = 0;
int var_13 = 971203381;
unsigned int var_14 = 81897626U;
unsigned int var_15 = 1394875727U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
