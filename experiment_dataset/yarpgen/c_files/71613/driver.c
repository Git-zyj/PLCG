#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2144146332U;
signed char var_1 = (signed char)88;
unsigned long long int var_3 = 18395737331845576968ULL;
unsigned int var_4 = 3721595601U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6527237913798429003LL;
unsigned int var_7 = 3105147526U;
short var_8 = (short)-9160;
short var_9 = (short)-10775;
int var_10 = -516294187;
int zero = 0;
short var_11 = (short)-18452;
short var_12 = (short)16885;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
