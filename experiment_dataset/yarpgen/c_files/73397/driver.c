#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
unsigned int var_5 = 3059335790U;
short var_6 = (short)-6866;
int var_8 = 856457269;
_Bool var_9 = (_Bool)1;
int var_11 = 1722698222;
unsigned long long int var_12 = 2266368517685241270ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)3108;
short var_16 = (short)-8629;
short var_17 = (short)-15578;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
