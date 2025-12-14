#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9769208337131033426ULL;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int var_12 = -846892868;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1467380210557785738ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
