#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 859532067;
unsigned long long int var_16 = 3888324116783960543ULL;
int zero = 0;
unsigned long long int var_20 = 4536853676733045162ULL;
unsigned long long int var_21 = 17992488655820785789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
