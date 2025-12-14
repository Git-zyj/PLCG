#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
int var_1 = 1802283277;
unsigned short var_3 = (unsigned short)4744;
unsigned int var_5 = 2712246176U;
int var_6 = 1240106548;
unsigned long long int var_8 = 15879530432461304133ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 975688437U;
long long int var_11 = 8074460081561303093LL;
unsigned int var_12 = 1990405759U;
long long int var_13 = 8958320837129003014LL;
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
