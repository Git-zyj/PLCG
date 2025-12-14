#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1760092914;
short var_4 = (short)-20278;
short var_5 = (short)4596;
unsigned short var_6 = (unsigned short)40854;
long long int var_7 = 6850847284874658680LL;
short var_9 = (short)10600;
short var_11 = (short)2436;
int zero = 0;
short var_12 = (short)641;
unsigned int var_13 = 1678684015U;
unsigned short var_14 = (unsigned short)63693;
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
