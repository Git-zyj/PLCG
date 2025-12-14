#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 1448952909400087655ULL;
unsigned char var_5 = (unsigned char)28;
long long int var_7 = 1364666840598362227LL;
unsigned short var_8 = (unsigned short)37613;
unsigned int var_17 = 3413199420U;
int zero = 0;
unsigned int var_20 = 2082849640U;
signed char var_21 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
