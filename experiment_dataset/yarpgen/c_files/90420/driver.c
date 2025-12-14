#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)115;
unsigned long long int var_14 = 14255398596842190952ULL;
unsigned char var_15 = (unsigned char)95;
int zero = 0;
long long int var_17 = -170465041048434329LL;
int var_18 = 1512781098;
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
