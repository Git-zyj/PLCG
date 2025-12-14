#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8230311302967662989LL;
signed char var_3 = (signed char)6;
signed char var_5 = (signed char)-115;
long long int var_8 = -5587956924841835910LL;
int zero = 0;
signed char var_13 = (signed char)57;
signed char var_14 = (signed char)38;
signed char var_15 = (signed char)71;
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
