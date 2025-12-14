#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 4310563107591210525ULL;
short var_5 = (short)-24540;
unsigned int var_6 = 2360139530U;
int var_9 = -1001662902;
unsigned long long int var_10 = 15792662959375608062ULL;
long long int var_11 = -5825585859014956873LL;
long long int var_12 = -8589727896083653218LL;
unsigned long long int var_14 = 8605949853127698877ULL;
unsigned char var_15 = (unsigned char)67;
unsigned char var_16 = (unsigned char)90;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)131;
unsigned int var_19 = 1970477299U;
signed char var_20 = (signed char)101;
int var_21 = 77760344;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
