#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2150922928U;
int var_1 = 203022004;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 16704398014610200117ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6890176920881958134LL;
signed char var_20 = (signed char)-12;
unsigned long long int var_21 = 4752199864400511730ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
