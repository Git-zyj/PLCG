#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)153;
unsigned short var_5 = (unsigned short)45607;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)24;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 744488683U;
int zero = 0;
signed char var_13 = (signed char)75;
unsigned short var_14 = (unsigned short)40272;
unsigned int var_15 = 16814072U;
unsigned short var_16 = (unsigned short)7541;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
