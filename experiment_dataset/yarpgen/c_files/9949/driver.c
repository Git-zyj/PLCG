#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6959703316663153453LL;
unsigned long long int var_2 = 8843469128590052511ULL;
long long int var_5 = 333599232396853755LL;
int var_8 = -489021650;
signed char var_10 = (signed char)124;
long long int var_11 = 5193798459917756465LL;
signed char var_14 = (signed char)66;
int zero = 0;
unsigned long long int var_16 = 5373532521440546340ULL;
unsigned long long int var_17 = 7985873875045220005ULL;
signed char var_18 = (signed char)68;
signed char var_19 = (signed char)127;
short var_20 = (short)3357;
unsigned int var_21 = 4225917229U;
unsigned int var_22 = 2708835472U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
