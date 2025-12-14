#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32687;
_Bool var_2 = (_Bool)1;
long long int var_6 = 7009788122671701910LL;
unsigned long long int var_10 = 11433432231369983578ULL;
unsigned long long int var_12 = 4576363716822282166ULL;
int zero = 0;
short var_13 = (short)-5566;
long long int var_14 = 3661166186248585815LL;
unsigned short var_15 = (unsigned short)43192;
unsigned short var_16 = (unsigned short)37471;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
