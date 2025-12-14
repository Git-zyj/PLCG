#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 628968404;
int var_1 = -84507971;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13018389301754284294ULL;
int zero = 0;
short var_12 = (short)4854;
long long int var_13 = 8972590094644329929LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
