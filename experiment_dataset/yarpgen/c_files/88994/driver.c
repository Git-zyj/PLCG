#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1921060852;
signed char var_2 = (signed char)98;
long long int var_4 = 7158387843471137508LL;
short var_5 = (short)15325;
int var_6 = 875984936;
unsigned int var_11 = 3706558534U;
int var_12 = 2071961774;
int zero = 0;
unsigned int var_14 = 146931101U;
int var_15 = 1671537127;
unsigned int var_16 = 4230702854U;
signed char var_17 = (signed char)74;
unsigned int var_18 = 3431974948U;
long long int var_19 = 2802418295372644769LL;
unsigned long long int var_20 = 7080207612032399134ULL;
unsigned int var_21 = 1793764742U;
_Bool var_22 = (_Bool)0;
int arr_1 [16] ;
_Bool arr_2 [16] [16] ;
signed char arr_6 [16] [16] ;
_Bool arr_7 [16] [16] ;
unsigned int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 565762465 : 193407036;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-65 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 873642064U : 99094880U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
