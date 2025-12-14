#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47968;
unsigned long long int var_1 = 1202214226677874370ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)28351;
int zero = 0;
unsigned long long int var_13 = 14768982890420199211ULL;
unsigned long long int var_14 = 6727657915576544649ULL;
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
