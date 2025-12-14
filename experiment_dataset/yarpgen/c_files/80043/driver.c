#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -897997372;
unsigned char var_3 = (unsigned char)216;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)11104;
unsigned int var_12 = 1285246197U;
short var_15 = (short)7389;
unsigned long long int var_16 = 3884808039200300420ULL;
int var_17 = 486793848;
int zero = 0;
unsigned char var_18 = (unsigned char)134;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
