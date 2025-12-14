#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)72;
signed char var_6 = (signed char)-40;
signed char var_7 = (signed char)75;
unsigned short var_11 = (unsigned short)54831;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)37;
signed char var_18 = (signed char)92;
unsigned short var_19 = (unsigned short)61419;
unsigned short var_20 = (unsigned short)18029;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
