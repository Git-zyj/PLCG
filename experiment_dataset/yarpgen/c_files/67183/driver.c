#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-96;
unsigned long long int var_3 = 28443733349702170ULL;
long long int var_8 = -3106719741239658156LL;
unsigned long long int var_9 = 41448193161310216ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
