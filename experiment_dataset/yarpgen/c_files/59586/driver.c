#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 615421023;
unsigned int var_1 = 3788079789U;
unsigned int var_2 = 1106978006U;
signed char var_8 = (signed char)36;
signed char var_9 = (signed char)67;
unsigned int var_10 = 1332653999U;
int var_12 = 679264546;
int zero = 0;
long long int var_16 = 3861474196315843858LL;
unsigned long long int var_17 = 11011855355450835926ULL;
void init() {
}

void checksum() {
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
