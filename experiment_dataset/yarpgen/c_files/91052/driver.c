#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1340051107098051240LL;
unsigned int var_4 = 2853339157U;
unsigned long long int var_11 = 13909886324704939503ULL;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)-120;
int zero = 0;
unsigned long long int var_18 = 11854928666644452458ULL;
int var_19 = 1488013506;
int var_20 = 1918720290;
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
