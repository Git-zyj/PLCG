#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16867;
unsigned long long int var_11 = 9991154988433091339ULL;
unsigned long long int var_12 = 14962129428311461419ULL;
unsigned char var_16 = (unsigned char)83;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-36;
int zero = 0;
signed char var_20 = (signed char)123;
long long int var_21 = 2937059440463909370LL;
long long int var_22 = 50388348357056998LL;
unsigned char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
