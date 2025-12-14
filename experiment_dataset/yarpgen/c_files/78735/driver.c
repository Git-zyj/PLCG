#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5083440815053118158ULL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_5 = -2063234999;
short var_10 = (short)-12308;
int zero = 0;
unsigned short var_11 = (unsigned short)13211;
unsigned char var_12 = (unsigned char)123;
long long int var_13 = -499503770551313271LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
