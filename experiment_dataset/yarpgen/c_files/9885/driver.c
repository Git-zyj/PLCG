#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)0;
short var_5 = (short)5364;
signed char var_8 = (signed char)-42;
unsigned char var_16 = (unsigned char)114;
int zero = 0;
short var_19 = (short)10022;
unsigned int var_20 = 2966166348U;
long long int var_21 = 8685606243190084407LL;
void init() {
}

void checksum() {
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
