#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -937209671;
unsigned long long int var_9 = 16647150592540404205ULL;
short var_14 = (short)22947;
int zero = 0;
int var_18 = 1373172017;
unsigned char var_19 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
