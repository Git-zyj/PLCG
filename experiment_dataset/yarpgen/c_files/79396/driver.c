#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15368;
unsigned short var_1 = (unsigned short)18495;
short var_3 = (short)5671;
unsigned int var_5 = 2777885415U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)64497;
signed char var_10 = (signed char)54;
unsigned int var_11 = 142805016U;
signed char var_13 = (signed char)-94;
signed char var_14 = (signed char)-56;
signed char var_17 = (signed char)112;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3632860967U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
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
