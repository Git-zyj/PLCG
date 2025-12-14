#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1341540498;
long long int var_3 = 3714072941746680372LL;
unsigned long long int var_4 = 4356736320689611211ULL;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-112;
int zero = 0;
signed char var_11 = (signed char)58;
unsigned int var_12 = 2674590759U;
long long int var_13 = -8292427024874678530LL;
unsigned int var_14 = 4001183327U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
