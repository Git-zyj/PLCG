#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)32021;
_Bool var_2 = (_Bool)0;
unsigned char var_9 = (unsigned char)70;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-26743;
unsigned char var_12 = (unsigned char)216;
int zero = 0;
unsigned int var_15 = 1311178172U;
unsigned long long int var_16 = 17579155809889205511ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-32624;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
