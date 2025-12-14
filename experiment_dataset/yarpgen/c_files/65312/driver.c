#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5739027166117976428ULL;
unsigned short var_12 = (unsigned short)59868;
int zero = 0;
unsigned long long int var_15 = 1600973212539163769ULL;
unsigned long long int var_16 = 10837184975374780047ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)29284;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
