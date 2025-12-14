#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)67;
unsigned int var_9 = 688696495U;
unsigned int var_12 = 2738711845U;
unsigned char var_13 = (unsigned char)181;
unsigned long long int var_14 = 1527777451953078310ULL;
int zero = 0;
unsigned int var_16 = 3465515576U;
short var_17 = (short)29296;
unsigned int var_18 = 3435218109U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
