#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1298558931U;
unsigned int var_1 = 3796209892U;
unsigned char var_4 = (unsigned char)170;
unsigned char var_6 = (unsigned char)200;
signed char var_9 = (signed char)20;
short var_10 = (short)-5188;
short var_12 = (short)25315;
short var_13 = (short)-6389;
int zero = 0;
unsigned int var_14 = 532673878U;
unsigned char var_15 = (unsigned char)74;
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
