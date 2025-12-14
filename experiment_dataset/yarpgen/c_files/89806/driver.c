#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)34;
short var_8 = (short)10352;
short var_11 = (short)22978;
long long int var_12 = -6925797648347009041LL;
short var_13 = (short)27214;
unsigned int var_16 = 677585337U;
unsigned char var_17 = (unsigned char)121;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
unsigned int var_20 = 3836961515U;
short var_21 = (short)11183;
unsigned short var_22 = (unsigned short)27531;
void init() {
}

void checksum() {
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
