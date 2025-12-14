#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2182738639U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)52;
unsigned char var_7 = (unsigned char)36;
unsigned int var_11 = 1417967327U;
unsigned int var_13 = 2610916551U;
int zero = 0;
unsigned int var_14 = 106565365U;
unsigned int var_15 = 4131873235U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
