#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)159;
unsigned long long int var_8 = 11406920563940353271ULL;
int zero = 0;
long long int var_11 = 9028923178330627128LL;
unsigned char var_12 = (unsigned char)41;
long long int var_13 = 3049429715696193581LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
