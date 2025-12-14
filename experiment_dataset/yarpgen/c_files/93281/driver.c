#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3362667659797587084LL;
int var_3 = -1287602527;
long long int var_6 = -3106202475230155130LL;
short var_8 = (short)-3023;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)12691;
int zero = 0;
unsigned short var_16 = (unsigned short)59106;
unsigned short var_17 = (unsigned short)51418;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
