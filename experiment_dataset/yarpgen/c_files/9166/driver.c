#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
short var_2 = (short)-15793;
unsigned short var_5 = (unsigned short)48122;
unsigned char var_6 = (unsigned char)151;
signed char var_11 = (signed char)38;
unsigned int var_16 = 4030664247U;
unsigned short var_17 = (unsigned short)42569;
int zero = 0;
unsigned int var_20 = 1754143632U;
int var_21 = -1981805957;
unsigned short var_22 = (unsigned short)48852;
unsigned int var_23 = 1991807820U;
signed char var_24 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
