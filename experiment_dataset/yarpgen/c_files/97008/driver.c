#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3321473940U;
signed char var_3 = (signed char)31;
unsigned int var_4 = 1001411003U;
unsigned long long int var_5 = 8422303863684320705ULL;
unsigned long long int var_6 = 14840964500251135691ULL;
unsigned int var_8 = 3129759738U;
signed char var_10 = (signed char)97;
signed char var_11 = (signed char)44;
signed char var_14 = (signed char)-99;
unsigned int var_18 = 1208191734U;
int zero = 0;
unsigned long long int var_19 = 14089077811975362571ULL;
signed char var_20 = (signed char)-52;
unsigned int var_21 = 3099704058U;
signed char var_22 = (signed char)-125;
unsigned int var_23 = 768637039U;
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
