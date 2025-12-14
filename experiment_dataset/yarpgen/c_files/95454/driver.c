#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_6 = (short)-22724;
short var_7 = (short)1675;
signed char var_12 = (signed char)-12;
unsigned int var_15 = 4257892401U;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)10;
unsigned short var_20 = (unsigned short)36839;
long long int var_21 = 7497017591139099485LL;
void init() {
}

void checksum() {
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
