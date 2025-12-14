#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12250562857125437924ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)63;
unsigned char var_3 = (unsigned char)213;
long long int var_4 = 6338159998001798302LL;
int var_5 = 1460090825;
signed char var_7 = (signed char)66;
int zero = 0;
unsigned short var_11 = (unsigned short)45222;
unsigned long long int var_12 = 5663886363725179741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
