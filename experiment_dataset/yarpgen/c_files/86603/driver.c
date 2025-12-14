#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -162093886;
signed char var_8 = (signed char)-49;
long long int var_9 = 3515003281651297222LL;
int zero = 0;
unsigned int var_10 = 3512445321U;
long long int var_11 = -940853639004336031LL;
long long int var_12 = -2535342667945722918LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
