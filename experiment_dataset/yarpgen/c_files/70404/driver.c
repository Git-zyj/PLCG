#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 4081711104365776610ULL;
signed char var_9 = (signed char)122;
unsigned short var_10 = (unsigned short)28471;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -792525347;
unsigned short var_14 = (unsigned short)60053;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
