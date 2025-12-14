#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1791070959U;
unsigned short var_2 = (unsigned short)34005;
unsigned long long int var_5 = 16163625612634306465ULL;
unsigned char var_6 = (unsigned char)144;
long long int var_7 = -7378772902330075453LL;
unsigned char var_9 = (unsigned char)184;
unsigned long long int var_10 = 7919982204283620543ULL;
unsigned short var_13 = (unsigned short)13312;
unsigned long long int var_15 = 1046127412867471317ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)57279;
void init() {
}

void checksum() {
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
