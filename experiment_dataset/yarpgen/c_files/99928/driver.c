#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_10 = (short)-21454;
unsigned int var_13 = 2830829514U;
long long int var_16 = 2894920735269323025LL;
signed char var_19 = (signed char)102;
int zero = 0;
short var_20 = (short)-8349;
int var_21 = -1763621547;
int var_22 = -1196904313;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
