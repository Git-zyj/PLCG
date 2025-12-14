#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16149;
long long int var_3 = 5209782127952180955LL;
short var_4 = (short)9938;
unsigned char var_5 = (unsigned char)38;
signed char var_6 = (signed char)93;
unsigned char var_10 = (unsigned char)119;
long long int var_13 = -635602628188069700LL;
short var_14 = (short)-31401;
unsigned char var_17 = (unsigned char)165;
int zero = 0;
unsigned char var_19 = (unsigned char)151;
_Bool var_20 = (_Bool)1;
long long int var_21 = -422641377603414934LL;
unsigned int var_22 = 3586883537U;
unsigned short var_23 = (unsigned short)34230;
int arr_1 [16] ;
_Bool arr_3 [16] [16] [16] ;
unsigned char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1963639889;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)179;
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
