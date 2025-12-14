#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1152141385;
long long int var_1 = 5618801484301978039LL;
unsigned char var_3 = (unsigned char)24;
short var_4 = (short)-14648;
unsigned int var_5 = 2426019882U;
short var_6 = (short)-2254;
unsigned short var_7 = (unsigned short)7334;
int var_9 = 438330375;
long long int var_10 = 7440491407689092843LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2878107189178325231LL;
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
