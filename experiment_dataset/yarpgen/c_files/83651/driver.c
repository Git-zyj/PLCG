#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13123816285823449937ULL;
unsigned long long int var_5 = 8307880323101362606ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3053919049U;
int var_10 = -254638308;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)18;
unsigned long long int var_13 = 17708282236542737518ULL;
unsigned int var_14 = 4093721018U;
int zero = 0;
unsigned int var_15 = 856816512U;
unsigned long long int var_16 = 5453580593263290827ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1056193044236005815ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
