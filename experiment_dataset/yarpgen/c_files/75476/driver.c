#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -376880580;
unsigned char var_5 = (unsigned char)108;
int var_6 = 1227739682;
unsigned char var_9 = (unsigned char)136;
unsigned int var_10 = 1630222275U;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8518695801761954957LL;
int zero = 0;
unsigned int var_19 = 3548937845U;
unsigned char var_20 = (unsigned char)101;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3134460972U;
_Bool var_23 = (_Bool)0;
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
