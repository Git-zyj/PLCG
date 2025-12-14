#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3942801506U;
unsigned long long int var_3 = 948337954321345167ULL;
signed char var_4 = (signed char)-106;
unsigned int var_5 = 852943096U;
signed char var_7 = (signed char)116;
unsigned int var_8 = 690364912U;
short var_9 = (short)28310;
unsigned short var_10 = (unsigned short)65383;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14557291815351467539ULL;
unsigned char var_14 = (unsigned char)227;
unsigned char var_15 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
