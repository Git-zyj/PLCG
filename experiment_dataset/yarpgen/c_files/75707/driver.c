#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 309548545U;
long long int var_1 = -9139432224994387521LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 14087927077485137563ULL;
int zero = 0;
int var_11 = -333467103;
signed char var_12 = (signed char)103;
unsigned int var_13 = 3796497578U;
short var_14 = (short)7955;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
