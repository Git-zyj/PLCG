#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7775729672849340410ULL;
_Bool var_3 = (_Bool)0;
short var_9 = (short)20870;
unsigned short var_12 = (unsigned short)43423;
int var_16 = 2015778541;
int zero = 0;
unsigned char var_18 = (unsigned char)234;
signed char var_19 = (signed char)14;
signed char var_20 = (signed char)-68;
unsigned short var_21 = (unsigned short)32836;
int var_22 = 788162203;
unsigned char var_23 = (unsigned char)236;
unsigned char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)52;
}

void checksum() {
    hash(&seed, var_18);
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
