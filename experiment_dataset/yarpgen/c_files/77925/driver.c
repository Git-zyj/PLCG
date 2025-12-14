#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61002;
_Bool var_2 = (_Bool)1;
int var_3 = 1662006774;
long long int var_6 = -2474671702082661637LL;
unsigned short var_9 = (unsigned short)25142;
int zero = 0;
unsigned long long int var_10 = 12246710188544785212ULL;
unsigned short var_11 = (unsigned short)7500;
signed char var_12 = (signed char)33;
_Bool var_13 = (_Bool)0;
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
