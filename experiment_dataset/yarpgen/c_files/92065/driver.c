#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned int var_3 = 2151406835U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)73;
short var_10 = (short)-3479;
int zero = 0;
unsigned char var_14 = (unsigned char)56;
unsigned int var_15 = 2467763461U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
