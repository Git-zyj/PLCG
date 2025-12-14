#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15031154193888442062ULL;
short var_4 = (short)26500;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 8466461835193345047ULL;
unsigned int var_9 = 3748900965U;
int zero = 0;
signed char var_11 = (signed char)24;
unsigned long long int var_12 = 1380423367203502102ULL;
void init() {
}

void checksum() {
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
