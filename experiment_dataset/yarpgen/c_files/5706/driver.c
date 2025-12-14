#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-30708;
long long int var_5 = -7837171509571279907LL;
unsigned int var_7 = 3009673455U;
short var_8 = (short)29430;
unsigned int var_9 = 3951040474U;
int var_11 = -328063942;
int zero = 0;
short var_12 = (short)28321;
int var_13 = -46811547;
int var_14 = -755773857;
short var_15 = (short)-7820;
unsigned char var_16 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
