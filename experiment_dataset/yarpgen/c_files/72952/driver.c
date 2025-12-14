#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1866653855644555644ULL;
unsigned long long int var_2 = 13757773984456444546ULL;
unsigned long long int var_9 = 14492846837722296187ULL;
int zero = 0;
unsigned long long int var_10 = 2681154602258134017ULL;
unsigned long long int var_11 = 18083486228134385056ULL;
unsigned long long int var_12 = 18136560151958031414ULL;
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
