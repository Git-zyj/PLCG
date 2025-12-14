#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 13930188810512710694ULL;
unsigned long long int var_6 = 1745549253993838282ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2446253122852960942LL;
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
