#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7477959555679078782LL;
unsigned long long int var_3 = 2436747481696606773ULL;
int var_4 = -377736757;
signed char var_9 = (signed char)70;
unsigned long long int var_11 = 10181778519300577749ULL;
signed char var_12 = (signed char)50;
int zero = 0;
int var_16 = 47777498;
unsigned int var_17 = 3612520114U;
void init() {
}

void checksum() {
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
