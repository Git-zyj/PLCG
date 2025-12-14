#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)31057;
short var_13 = (short)-31680;
int var_17 = -1866160962;
short var_19 = (short)12171;
int zero = 0;
signed char var_20 = (signed char)-117;
short var_21 = (short)31767;
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
