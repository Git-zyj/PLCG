#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3776650290U;
unsigned short var_6 = (unsigned short)39077;
short var_7 = (short)-18238;
short var_10 = (short)21872;
signed char var_12 = (signed char)-70;
unsigned int var_13 = 4181786108U;
int zero = 0;
signed char var_15 = (signed char)81;
signed char var_16 = (signed char)80;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
