#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45672;
unsigned char var_2 = (unsigned char)137;
unsigned long long int var_8 = 3723205287051782067ULL;
int var_9 = -770547306;
int zero = 0;
int var_10 = -1316829970;
unsigned short var_11 = (unsigned short)55689;
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
