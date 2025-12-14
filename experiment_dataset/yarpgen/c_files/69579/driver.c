#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 448737252U;
long long int var_9 = -1127392173968856204LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3298023899U;
int zero = 0;
unsigned int var_15 = 2926672112U;
int var_16 = 32746850;
signed char var_17 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
