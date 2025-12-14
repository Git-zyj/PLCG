#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1210115961U;
signed char var_4 = (signed char)9;
signed char var_5 = (signed char)24;
long long int var_9 = 3152607068687213498LL;
unsigned long long int var_11 = 782906957773575207ULL;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)40;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-108;
unsigned int var_21 = 1213117532U;
short var_22 = (short)-15610;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34196 : (unsigned short)14670;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
