#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
unsigned long long int var_13 = 16058172014496498625ULL;
int zero = 0;
long long int var_15 = 4367031980205049365LL;
signed char var_16 = (signed char)33;
int var_17 = 19838584;
int var_18 = 136832067;
long long int var_19 = 3047482960118715849LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
