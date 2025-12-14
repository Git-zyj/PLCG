#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_9 = (short)-8838;
unsigned short var_13 = (unsigned short)22269;
int var_15 = -582317048;
int zero = 0;
unsigned short var_18 = (unsigned short)36102;
unsigned short var_19 = (unsigned short)5131;
void init() {
}

void checksum() {
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
