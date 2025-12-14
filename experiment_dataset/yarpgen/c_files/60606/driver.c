#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
short var_4 = (short)-1102;
signed char var_6 = (signed char)6;
signed char var_8 = (signed char)-19;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 505712010U;
unsigned short var_14 = (unsigned short)9647;
int var_16 = -415760158;
int zero = 0;
unsigned short var_18 = (unsigned short)24257;
signed char var_19 = (signed char)103;
signed char var_20 = (signed char)19;
unsigned long long int var_21 = 17919046039629184572ULL;
unsigned char var_22 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
