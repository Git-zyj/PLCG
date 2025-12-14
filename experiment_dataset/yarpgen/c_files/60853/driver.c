#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)127;
int var_5 = -1453523109;
unsigned short var_6 = (unsigned short)42530;
unsigned int var_14 = 167158770U;
short var_19 = (short)-1896;
int zero = 0;
unsigned int var_20 = 3945124103U;
_Bool var_21 = (_Bool)1;
int var_22 = -56147755;
void init() {
}

void checksum() {
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
