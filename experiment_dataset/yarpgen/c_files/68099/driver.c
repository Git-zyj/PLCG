#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61601;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 6554365413247554254ULL;
int var_13 = 609147816;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4333364175633594909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
