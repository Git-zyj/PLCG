#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1546963000;
long long int var_8 = 8573737508562603747LL;
unsigned int var_9 = 2193396401U;
unsigned long long int var_12 = 3843978026107432828ULL;
int zero = 0;
unsigned int var_19 = 369905553U;
unsigned long long int var_20 = 8703382303627312430ULL;
void init() {
}

void checksum() {
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
