#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4158550515U;
short var_4 = (short)30884;
unsigned char var_9 = (unsigned char)26;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)215;
int zero = 0;
unsigned short var_17 = (unsigned short)40567;
unsigned char var_18 = (unsigned char)43;
unsigned int var_19 = 300561453U;
int var_20 = 1892840386;
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
