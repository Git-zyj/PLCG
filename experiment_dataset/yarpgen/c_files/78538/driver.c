#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 249287147U;
_Bool var_7 = (_Bool)1;
int var_9 = 1720298881;
short var_10 = (short)-16607;
short var_11 = (short)-21841;
int zero = 0;
short var_13 = (short)17624;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)22;
int var_16 = 1330145562;
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
