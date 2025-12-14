#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8864634788963270825ULL;
unsigned long long int var_11 = 4500330979788702227ULL;
unsigned char var_19 = (unsigned char)115;
int zero = 0;
unsigned int var_20 = 1362757455U;
int var_21 = -2075536283;
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
