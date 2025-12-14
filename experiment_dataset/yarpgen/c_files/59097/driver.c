#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)67;
signed char var_6 = (signed char)-11;
unsigned long long int var_9 = 13977191195319990949ULL;
long long int var_11 = 5053452792020940663LL;
signed char var_13 = (signed char)-14;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = -99692401;
short var_17 = (short)-5656;
signed char var_18 = (signed char)-127;
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
