#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned long long int var_3 = 11484964163904274803ULL;
long long int var_6 = 7300483108400914567LL;
long long int var_8 = -639552166734520535LL;
unsigned long long int var_9 = 3993502298491427209ULL;
int zero = 0;
unsigned int var_10 = 433537767U;
unsigned long long int var_11 = 7647456237462109833ULL;
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
