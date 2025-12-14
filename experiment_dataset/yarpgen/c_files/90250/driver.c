#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38783;
unsigned int var_1 = 779360318U;
long long int var_4 = 6015671866818732716LL;
unsigned int var_6 = 1264539403U;
unsigned char var_8 = (unsigned char)15;
int zero = 0;
unsigned short var_10 = (unsigned short)44159;
unsigned short var_11 = (unsigned short)6809;
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
