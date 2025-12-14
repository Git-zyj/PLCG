#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-22293;
_Bool var_9 = (_Bool)0;
short var_11 = (short)9580;
int zero = 0;
signed char var_12 = (signed char)119;
unsigned int var_13 = 1829512357U;
signed char var_14 = (signed char)106;
short var_15 = (short)24855;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
