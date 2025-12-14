#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1458822992;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 13877979793186662791ULL;
int var_8 = 1716661404;
long long int var_12 = -73214753982368453LL;
int var_15 = 1682016630;
int zero = 0;
short var_16 = (short)-18124;
unsigned long long int var_17 = 18062174986633797601ULL;
signed char var_18 = (signed char)105;
signed char var_19 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
