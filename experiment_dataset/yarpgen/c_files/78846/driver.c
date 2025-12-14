#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 16128604073085578187ULL;
signed char var_17 = (signed char)-81;
int zero = 0;
signed char var_18 = (signed char)115;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 10403708887615756434ULL;
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
