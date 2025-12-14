#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -261815063163034248LL;
unsigned int var_4 = 1133212503U;
unsigned char var_6 = (unsigned char)14;
int zero = 0;
int var_10 = 1332099984;
unsigned short var_11 = (unsigned short)33035;
unsigned char var_12 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
