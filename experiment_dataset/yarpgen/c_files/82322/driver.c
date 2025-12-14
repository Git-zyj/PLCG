#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12662691158321187305ULL;
_Bool var_3 = (_Bool)0;
int var_5 = -7800966;
long long int var_8 = -3102400388200795044LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1156101946U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 804866221U;
void init() {
}

void checksum() {
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
