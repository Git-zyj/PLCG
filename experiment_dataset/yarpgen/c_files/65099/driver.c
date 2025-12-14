#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4003875870665169999LL;
unsigned char var_3 = (unsigned char)205;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 3692829525U;
unsigned char var_12 = (unsigned char)49;
unsigned long long int var_17 = 7176657701882611418ULL;
int zero = 0;
short var_18 = (short)24473;
short var_19 = (short)-13768;
void init() {
}

void checksum() {
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
