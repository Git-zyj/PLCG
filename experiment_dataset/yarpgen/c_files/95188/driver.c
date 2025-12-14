#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8500119093890549738LL;
unsigned long long int var_7 = 1138576329838921652ULL;
unsigned int var_10 = 4005484247U;
unsigned int var_16 = 3215678136U;
int zero = 0;
unsigned int var_20 = 3353874335U;
_Bool var_21 = (_Bool)0;
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
