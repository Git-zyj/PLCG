#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2166711273178377075LL;
long long int var_4 = -1086332120859737823LL;
long long int var_7 = -1813817216154854058LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8138872815566448163ULL;
long long int var_13 = -8644887671008347556LL;
long long int var_14 = 7586749990530607831LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
