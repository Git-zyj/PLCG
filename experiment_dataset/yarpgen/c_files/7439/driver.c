#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19418;
unsigned int var_2 = 3505865643U;
signed char var_3 = (signed char)111;
unsigned short var_5 = (unsigned short)15065;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)3475;
int var_10 = -1271578316;
int zero = 0;
unsigned short var_14 = (unsigned short)44554;
signed char var_15 = (signed char)12;
signed char var_16 = (signed char)58;
unsigned short var_17 = (unsigned short)29446;
unsigned short var_18 = (unsigned short)56801;
long long int var_19 = -1329677421456742227LL;
unsigned long long int var_20 = 14866372848510247259ULL;
signed char var_21 = (signed char)-92;
long long int var_22 = 6464275621119619586LL;
unsigned short var_23 = (unsigned short)36948;
unsigned int arr_3 [15] [15] [15] ;
unsigned short arr_4 [21] ;
unsigned int arr_5 [21] [21] ;
signed char arr_6 [21] ;
long long int arr_7 [21] ;
int arr_8 [21] [21] ;
unsigned short arr_9 [21] ;
unsigned long long int arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 162893722U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)34190;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 1588862125U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2735122411651790203LL : -8657850546613301815LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 1448132853 : -1202496241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)52400;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 14468678084777461570ULL;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
