#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1812;
unsigned int var_5 = 503688702U;
short var_8 = (short)30125;
unsigned char var_11 = (unsigned char)215;
int var_13 = 320925256;
int zero = 0;
short var_15 = (short)-7944;
signed char var_16 = (signed char)39;
long long int var_17 = 4082171018695366401LL;
short var_18 = (short)-13445;
unsigned long long int var_19 = 6933128737455594869ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
