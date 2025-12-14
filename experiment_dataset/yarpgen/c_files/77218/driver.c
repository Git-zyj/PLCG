#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8515304124155360382LL;
unsigned short var_6 = (unsigned short)23640;
unsigned int var_9 = 1223170983U;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_19 = 1661601607;
short var_20 = (short)20103;
short var_21 = (short)15172;
void init() {
}

void checksum() {
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
