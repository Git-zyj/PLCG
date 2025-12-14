#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)59;
short var_10 = (short)21935;
unsigned char var_15 = (unsigned char)114;
int zero = 0;
signed char var_17 = (signed char)76;
_Bool var_18 = (_Bool)0;
short var_19 = (short)31455;
unsigned char var_20 = (unsigned char)126;
short var_21 = (short)29779;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
