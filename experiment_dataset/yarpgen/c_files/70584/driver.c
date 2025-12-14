#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)218;
unsigned int var_4 = 3216617081U;
unsigned long long int var_5 = 6152184015037820518ULL;
unsigned char var_7 = (unsigned char)55;
unsigned short var_8 = (unsigned short)45302;
unsigned int var_9 = 3462593496U;
int zero = 0;
unsigned int var_10 = 3924627947U;
int var_11 = -27202944;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
