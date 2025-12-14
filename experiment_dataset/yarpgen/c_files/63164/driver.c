#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36551;
unsigned int var_2 = 1149104741U;
int var_3 = -1365577544;
unsigned short var_4 = (unsigned short)65165;
unsigned int var_6 = 1591656290U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -7608217956024738931LL;
short var_13 = (short)-22463;
unsigned long long int var_14 = 15953967809922940545ULL;
unsigned int var_15 = 1412682969U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
