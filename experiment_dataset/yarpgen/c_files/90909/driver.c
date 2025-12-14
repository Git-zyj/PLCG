#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6537587504809355600LL;
unsigned char var_3 = (unsigned char)238;
signed char var_4 = (signed char)-45;
unsigned long long int var_8 = 16012207512722082108ULL;
unsigned char var_16 = (unsigned char)134;
int zero = 0;
long long int var_17 = 9076630717010080561LL;
long long int var_18 = -1297012957559361698LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
