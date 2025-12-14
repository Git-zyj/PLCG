#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3966038452U;
unsigned int var_7 = 4207630161U;
long long int var_12 = 7337117085324156630LL;
signed char var_17 = (signed char)20;
int zero = 0;
int var_18 = 1988789392;
unsigned char var_19 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
