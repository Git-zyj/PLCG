#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)100;
int var_17 = 1886095819;
int zero = 0;
unsigned short var_18 = (unsigned short)48834;
unsigned long long int var_19 = 16402793353567319871ULL;
unsigned long long int var_20 = 15465112302714469872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
