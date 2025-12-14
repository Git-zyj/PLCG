#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6960308474798501679LL;
int var_3 = 1825115241;
int var_4 = 1851478702;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-16301;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)40735;
signed char var_14 = (signed char)102;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)29214;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
