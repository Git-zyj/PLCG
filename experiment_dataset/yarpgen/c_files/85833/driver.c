#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 214963518;
unsigned int var_3 = 425358303U;
long long int var_6 = -7524615233891471947LL;
unsigned int var_9 = 1739599326U;
int zero = 0;
unsigned long long int var_15 = 1447714477113723263ULL;
signed char var_16 = (signed char)71;
void init() {
}

void checksum() {
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
