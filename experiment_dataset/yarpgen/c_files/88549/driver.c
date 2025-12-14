#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)45;
unsigned char var_12 = (unsigned char)17;
unsigned int var_13 = 4131480683U;
int zero = 0;
unsigned char var_20 = (unsigned char)222;
long long int var_21 = 3107459414836986878LL;
unsigned char var_22 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
