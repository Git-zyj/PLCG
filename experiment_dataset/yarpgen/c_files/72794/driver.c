#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3256657193U;
unsigned long long int var_2 = 13827244586172749544ULL;
int var_7 = 856154696;
int zero = 0;
unsigned long long int var_10 = 14193042082978068840ULL;
int var_11 = 1762053751;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2360450908197984774LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
