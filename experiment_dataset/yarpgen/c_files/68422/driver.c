#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25602;
int var_5 = -745337614;
_Bool var_7 = (_Bool)0;
int var_10 = -2099199542;
int zero = 0;
signed char var_13 = (signed char)46;
unsigned int var_14 = 1110683041U;
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
