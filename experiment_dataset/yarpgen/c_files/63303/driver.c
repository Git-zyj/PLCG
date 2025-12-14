#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6564288776085945652LL;
short var_8 = (short)-5593;
unsigned long long int var_11 = 6981108847727019860ULL;
unsigned long long int var_15 = 11088600553960984874ULL;
long long int var_18 = -6702030274349190463LL;
int zero = 0;
short var_20 = (short)-30817;
short var_21 = (short)-32298;
signed char var_22 = (signed char)-119;
long long int var_23 = 432454313054016076LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
