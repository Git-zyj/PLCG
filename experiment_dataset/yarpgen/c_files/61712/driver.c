#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2581585485480351986ULL;
int var_3 = 1990853512;
_Bool var_6 = (_Bool)0;
long long int var_8 = -327803831258862354LL;
unsigned int var_11 = 44909903U;
int zero = 0;
unsigned char var_13 = (unsigned char)81;
short var_14 = (short)13596;
int var_15 = -1369828196;
void init() {
}

void checksum() {
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
