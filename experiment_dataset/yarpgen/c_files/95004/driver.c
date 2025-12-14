#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)96;
unsigned char var_8 = (unsigned char)252;
unsigned short var_10 = (unsigned short)56730;
unsigned int var_11 = 3282598904U;
unsigned char var_18 = (unsigned char)104;
int var_19 = 651586046;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-59;
unsigned int var_22 = 3644169319U;
signed char var_23 = (signed char)111;
unsigned int var_24 = 2959294065U;
unsigned char arr_2 [25] [25] [25] ;
unsigned int arr_3 [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)210 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1462647819U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5780 : (unsigned short)57497;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
