#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-330;
int var_4 = 1037092553;
short var_5 = (short)26329;
int var_9 = 1047706277;
unsigned int var_11 = 2880145905U;
unsigned char var_15 = (unsigned char)197;
long long int var_16 = -6796102675385776613LL;
int zero = 0;
long long int var_17 = -2396647773761629068LL;
long long int var_18 = 5066589090045131108LL;
signed char var_19 = (signed char)127;
signed char var_20 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
