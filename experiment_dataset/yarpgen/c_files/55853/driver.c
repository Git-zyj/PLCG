#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
short var_1 = (short)28025;
signed char var_2 = (signed char)31;
unsigned short var_3 = (unsigned short)27718;
signed char var_4 = (signed char)-60;
unsigned long long int var_5 = 6214011342068087145ULL;
unsigned short var_6 = (unsigned short)63578;
long long int var_7 = -1261752568053610125LL;
unsigned long long int var_8 = 7316285724399188600ULL;
signed char var_10 = (signed char)15;
int zero = 0;
unsigned long long int var_11 = 15264227432592972425ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 1455962963;
long long int var_14 = 3908417108639606818LL;
signed char var_15 = (signed char)91;
long long int var_16 = 548325358339708146LL;
long long int var_17 = -4815009969837166193LL;
_Bool var_18 = (_Bool)1;
signed char arr_0 [25] [25] ;
signed char arr_1 [25] ;
signed char arr_2 [25] ;
unsigned long long int arr_6 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned int arr_3 [25] ;
short arr_4 [25] ;
long long int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 15380832027021869151ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 12019403572712896795ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 560429565U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-31933;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 7364422649304762092LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
