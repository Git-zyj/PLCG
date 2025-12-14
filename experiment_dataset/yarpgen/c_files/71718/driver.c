#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2326748065U;
short var_4 = (short)-4105;
unsigned int var_5 = 2362977030U;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)37;
int var_14 = 1866711613;
unsigned char var_16 = (unsigned char)204;
int zero = 0;
int var_20 = -894193546;
unsigned int var_21 = 4115435008U;
signed char var_22 = (signed char)-33;
int var_23 = -1251714541;
int var_24 = -2141758464;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
