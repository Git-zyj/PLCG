#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2609802911U;
unsigned char var_4 = (unsigned char)31;
long long int var_5 = 6546973273893685040LL;
unsigned int var_6 = 3400641887U;
short var_10 = (short)13200;
unsigned char var_12 = (unsigned char)153;
int var_13 = 302022278;
unsigned long long int var_14 = 11727588658963383085ULL;
int zero = 0;
unsigned int var_18 = 511599631U;
unsigned short var_19 = (unsigned short)5921;
unsigned char var_20 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
