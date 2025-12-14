#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3067666018U;
unsigned long long int var_7 = 5502807216817975978ULL;
unsigned char var_16 = (unsigned char)3;
int zero = 0;
long long int var_18 = -1452608081844367217LL;
unsigned int var_19 = 1964848335U;
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
