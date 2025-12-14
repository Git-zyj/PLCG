#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)85;
unsigned long long int var_5 = 8177656583047194566ULL;
int var_7 = -577819579;
signed char var_15 = (signed char)119;
int zero = 0;
unsigned int var_16 = 886417203U;
long long int var_17 = 7222934124988487885LL;
unsigned char var_18 = (unsigned char)80;
int var_19 = -1928648141;
void init() {
}

void checksum() {
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
