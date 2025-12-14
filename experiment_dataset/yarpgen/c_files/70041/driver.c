#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1448792184;
int var_2 = -1749067645;
long long int var_4 = 7934678772445591291LL;
int var_10 = -966195197;
long long int var_13 = -6296301887444801763LL;
int zero = 0;
int var_16 = 1162734544;
unsigned long long int var_17 = 13412647388107779983ULL;
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
