#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
int var_6 = -2021654014;
short var_9 = (short)187;
unsigned int var_11 = 1122094290U;
int zero = 0;
long long int var_12 = 7985709059350438960LL;
short var_13 = (short)-5785;
unsigned short var_14 = (unsigned short)47662;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
