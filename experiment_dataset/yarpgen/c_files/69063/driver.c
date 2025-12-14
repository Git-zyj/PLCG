#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3053024517U;
unsigned char var_6 = (unsigned char)114;
unsigned char var_7 = (unsigned char)143;
int var_8 = -652787156;
int var_9 = -439506045;
int var_10 = -721263549;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 124300393;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
