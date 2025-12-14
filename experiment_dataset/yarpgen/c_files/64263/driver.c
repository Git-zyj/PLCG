#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
signed char var_2 = (signed char)-11;
unsigned long long int var_7 = 9261572497315823565ULL;
short var_16 = (short)-14912;
int zero = 0;
unsigned long long int var_17 = 6085879435005461012ULL;
unsigned long long int var_18 = 16677050124660259899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
