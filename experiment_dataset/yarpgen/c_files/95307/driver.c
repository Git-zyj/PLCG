#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
_Bool var_2 = (_Bool)1;
short var_3 = (short)30963;
short var_4 = (short)-16539;
unsigned short var_5 = (unsigned short)38753;
unsigned short var_7 = (unsigned short)62759;
unsigned char var_10 = (unsigned char)126;
long long int var_11 = 192604769087001153LL;
unsigned int var_12 = 2537193866U;
short var_14 = (short)6892;
long long int var_15 = 5396669883501332675LL;
unsigned short var_16 = (unsigned short)23173;
int zero = 0;
unsigned char var_18 = (unsigned char)192;
signed char var_19 = (signed char)17;
unsigned int var_20 = 2615921300U;
short var_21 = (short)24510;
unsigned int var_22 = 2738309279U;
unsigned int var_23 = 1623207668U;
short arr_0 [20] ;
unsigned short arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-16411;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)3875;
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
