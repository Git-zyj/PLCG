#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -184752359;
long long int var_8 = -9007804672476648415LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 8189813062299518331LL;
long long int var_13 = -15273681363492814LL;
long long int var_14 = 4717178149980524077LL;
signed char var_15 = (signed char)-62;
int zero = 0;
int var_16 = 1372261176;
long long int var_17 = 604993139571353029LL;
long long int var_18 = -4613780422001969162LL;
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
