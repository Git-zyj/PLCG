#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-31;
unsigned int var_15 = 3492779400U;
unsigned long long int var_16 = 11603904225604329721ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14474955454570490010ULL;
signed char var_19 = (signed char)-126;
long long int var_20 = 8908799749846167749LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
