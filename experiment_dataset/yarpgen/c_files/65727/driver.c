#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1804495674;
int var_1 = 773538687;
short var_8 = (short)22377;
int zero = 0;
unsigned int var_10 = 2990261066U;
unsigned int var_11 = 1025706428U;
unsigned long long int var_12 = 9530251209120193211ULL;
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
