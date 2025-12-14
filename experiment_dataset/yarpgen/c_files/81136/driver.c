#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58935;
unsigned long long int var_11 = 4065710024522520428ULL;
short var_12 = (short)13941;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 17754825468353297131ULL;
int zero = 0;
unsigned long long int var_16 = 6712156834044578655ULL;
short var_17 = (short)22922;
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
