#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2351960400U;
unsigned short var_2 = (unsigned short)33128;
unsigned char var_10 = (unsigned char)57;
unsigned long long int var_12 = 11400966501957631960ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3966429665U;
unsigned int var_19 = 4204898673U;
unsigned int var_20 = 592028887U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
