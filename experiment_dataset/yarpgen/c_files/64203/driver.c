#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1458300053U;
unsigned char var_5 = (unsigned char)37;
short var_6 = (short)-9779;
short var_12 = (short)-4623;
int zero = 0;
unsigned short var_13 = (unsigned short)7287;
unsigned short var_14 = (unsigned short)20486;
short var_15 = (short)8694;
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
