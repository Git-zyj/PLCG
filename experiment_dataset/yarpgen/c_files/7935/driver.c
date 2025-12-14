#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-12884;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)-67;
int zero = 0;
int var_19 = 266919475;
long long int var_20 = -4657993013206393121LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)16391;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
