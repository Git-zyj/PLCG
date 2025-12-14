#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 144397413U;
short var_5 = (short)30209;
unsigned char var_11 = (unsigned char)165;
short var_15 = (short)18719;
int zero = 0;
unsigned short var_18 = (unsigned short)84;
signed char var_19 = (signed char)(-127 - 1);
signed char var_20 = (signed char)18;
short var_21 = (short)-21127;
unsigned char var_22 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
