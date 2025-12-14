#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1555867586U;
unsigned int var_4 = 4285606363U;
unsigned char var_5 = (unsigned char)1;
signed char var_10 = (signed char)-123;
signed char var_11 = (signed char)1;
int var_12 = 1681219210;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)17837;
_Bool var_19 = (_Bool)0;
long long int var_20 = 8201940765065477975LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
