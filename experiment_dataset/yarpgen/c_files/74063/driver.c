#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)121;
unsigned int var_5 = 496287594U;
unsigned int var_8 = 2043385499U;
unsigned int var_9 = 2666199635U;
int var_11 = -735300637;
int zero = 0;
long long int var_13 = 1551312282049598355LL;
unsigned int var_14 = 1137447097U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
