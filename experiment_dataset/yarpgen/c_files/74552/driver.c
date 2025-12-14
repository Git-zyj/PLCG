#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 573721166U;
unsigned char var_4 = (unsigned char)192;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)189;
unsigned int var_11 = 154598110U;
unsigned long long int var_13 = 6672827573541210780ULL;
int zero = 0;
int var_15 = -991702861;
short var_16 = (short)17806;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
