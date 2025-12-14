#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5573;
_Bool var_6 = (_Bool)1;
int var_7 = 1269681543;
int var_10 = 860342274;
long long int var_11 = -7365282654773233552LL;
short var_14 = (short)-7779;
signed char var_15 = (signed char)55;
unsigned short var_17 = (unsigned short)44486;
int zero = 0;
short var_18 = (short)-1402;
unsigned long long int var_19 = 7079821752958806130ULL;
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
