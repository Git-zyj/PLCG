#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)31054;
_Bool var_9 = (_Bool)1;
unsigned char var_15 = (unsigned char)18;
unsigned short var_17 = (unsigned short)33328;
int zero = 0;
int var_19 = -1174007604;
int var_20 = 813986841;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1033031517U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
