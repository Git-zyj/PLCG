#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 9862783762039260531ULL;
long long int var_10 = 1675903107001300790LL;
int var_12 = -1960383605;
signed char var_14 = (signed char)106;
int zero = 0;
unsigned long long int var_15 = 3134632712864187637ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3218151639663131992LL;
signed char var_18 = (signed char)69;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
