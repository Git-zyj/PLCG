#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9456626018820591230ULL;
unsigned short var_1 = (unsigned short)25755;
unsigned short var_2 = (unsigned short)11454;
long long int var_5 = -2288714299632011605LL;
int var_6 = 309051720;
unsigned char var_8 = (unsigned char)17;
short var_10 = (short)3697;
unsigned char var_13 = (unsigned char)8;
long long int var_16 = 1821425064186725880LL;
short var_18 = (short)-17445;
unsigned long long int var_19 = 13993481798710993704ULL;
int zero = 0;
signed char var_20 = (signed char)96;
unsigned long long int var_21 = 200547189362069042ULL;
signed char var_22 = (signed char)-83;
unsigned long long int var_23 = 14183505629293226794ULL;
unsigned long long int var_24 = 14535565790853637761ULL;
long long int var_25 = 5752647103200243384LL;
unsigned long long int var_26 = 284757704767043943ULL;
signed char var_27 = (signed char)-33;
short arr_0 [18] ;
unsigned long long int arr_2 [18] [18] ;
short arr_3 [18] [18] [18] ;
unsigned short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)650;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 7004134212557849868ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)26909;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)42675;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
