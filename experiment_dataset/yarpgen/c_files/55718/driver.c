#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15413;
unsigned long long int var_5 = 13072678446972304483ULL;
unsigned long long int var_14 = 14484644768149735364ULL;
long long int var_16 = -8488571855613641270LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
