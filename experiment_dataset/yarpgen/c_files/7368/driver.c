#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 491648890U;
unsigned int var_3 = 3401763838U;
long long int var_4 = 7081645165051505738LL;
unsigned char var_5 = (unsigned char)109;
unsigned int var_7 = 3454967662U;
int zero = 0;
signed char var_15 = (signed char)-96;
unsigned long long int var_16 = 857482210780031262ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
