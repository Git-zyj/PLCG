#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13325600735969209103ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)25782;
unsigned long long int var_6 = 9132205374671621562ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 1012725392U;
unsigned long long int var_13 = 5103699127524259448ULL;
int zero = 0;
signed char var_18 = (signed char)42;
unsigned char var_19 = (unsigned char)253;
int var_20 = 1080937799;
short var_21 = (short)-23957;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
