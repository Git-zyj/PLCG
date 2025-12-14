#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 13162069111156757525ULL;
unsigned char var_10 = (unsigned char)151;
unsigned char var_12 = (unsigned char)95;
int zero = 0;
unsigned char var_13 = (unsigned char)113;
unsigned int var_14 = 3099447157U;
unsigned long long int var_15 = 9908786856898304360ULL;
void init() {
}

void checksum() {
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
