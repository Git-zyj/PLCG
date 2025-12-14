#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)63703;
unsigned short var_5 = (unsigned short)26581;
unsigned long long int var_9 = 11596488431145835790ULL;
unsigned long long int var_11 = 11854259218590125152ULL;
int zero = 0;
short var_16 = (short)-18948;
long long int var_17 = -4231997326698821681LL;
unsigned long long int var_18 = 10566780312263870906ULL;
_Bool var_19 = (_Bool)1;
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
