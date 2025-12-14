#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5502770871854212318ULL;
unsigned int var_5 = 4156369108U;
unsigned short var_8 = (unsigned short)28026;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 4120792156894917692LL;
int var_13 = 1845344393;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
