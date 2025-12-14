#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12487382944788960186ULL;
long long int var_9 = -121386498596269363LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-122;
signed char var_16 = (signed char)118;
void init() {
}

void checksum() {
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
