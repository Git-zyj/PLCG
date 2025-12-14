#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6077588557658954076LL;
short var_6 = (short)28561;
unsigned char var_7 = (unsigned char)196;
int zero = 0;
unsigned short var_10 = (unsigned short)2413;
long long int var_11 = -4333705080397519266LL;
unsigned char var_12 = (unsigned char)61;
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
