#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 703668266;
unsigned int var_1 = 897332047U;
unsigned long long int var_3 = 10272752677121742606ULL;
int zero = 0;
int var_19 = 633259785;
int var_20 = -1862856279;
int var_21 = 1489548690;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
