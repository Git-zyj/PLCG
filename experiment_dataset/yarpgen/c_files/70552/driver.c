#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1681924642;
int var_4 = -877745184;
unsigned long long int var_5 = 10724567445367048951ULL;
unsigned long long int var_7 = 18107795662843933058ULL;
unsigned char var_8 = (unsigned char)16;
unsigned short var_9 = (unsigned short)61619;
signed char var_12 = (signed char)-119;
unsigned short var_13 = (unsigned short)13244;
int zero = 0;
unsigned short var_14 = (unsigned short)23479;
unsigned long long int var_15 = 4817402141997532615ULL;
unsigned long long int var_16 = 1599081442962937083ULL;
unsigned char var_17 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
