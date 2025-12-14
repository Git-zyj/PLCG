#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3118081776019367831ULL;
unsigned long long int var_3 = 8981509566464319712ULL;
unsigned int var_10 = 2559848460U;
long long int var_13 = -245302054078234556LL;
short var_16 = (short)-15810;
int zero = 0;
signed char var_19 = (signed char)63;
short var_20 = (short)-11887;
unsigned short var_21 = (unsigned short)37083;
unsigned short var_22 = (unsigned short)2248;
short var_23 = (short)-31053;
unsigned int var_24 = 2675562439U;
short var_25 = (short)15597;
unsigned short var_26 = (unsigned short)14513;
unsigned short arr_6 [22] [22] ;
signed char arr_4 [10] ;
unsigned long long int arr_7 [22] ;
short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)21229;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 14112037827185287458ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)17893;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
