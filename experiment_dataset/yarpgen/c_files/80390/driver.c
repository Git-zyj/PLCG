#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2767594847U;
signed char var_1 = (signed char)125;
signed char var_2 = (signed char)83;
signed char var_3 = (signed char)25;
unsigned long long int var_4 = 8020083600004297713ULL;
short var_5 = (short)-1117;
signed char var_7 = (signed char)61;
short var_8 = (short)-5587;
unsigned short var_9 = (unsigned short)31800;
signed char var_10 = (signed char)45;
unsigned short var_12 = (unsigned short)32393;
int zero = 0;
unsigned short var_13 = (unsigned short)56061;
signed char var_14 = (signed char)77;
short var_15 = (short)2350;
signed char var_16 = (signed char)-91;
long long int var_17 = -4394804253330893715LL;
unsigned short var_18 = (unsigned short)52971;
unsigned short var_19 = (unsigned short)8440;
short var_20 = (short)-11926;
unsigned char var_21 = (unsigned char)107;
unsigned int var_22 = 3325564392U;
unsigned int var_23 = 912079017U;
unsigned long long int var_24 = 14156132162457318078ULL;
unsigned long long int var_25 = 1668538706457536902ULL;
unsigned long long int var_26 = 2358088198637031887ULL;
unsigned short var_27 = (unsigned short)36032;
unsigned short var_28 = (unsigned short)18023;
signed char var_29 = (signed char)59;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)3560;
unsigned short var_32 = (unsigned short)55485;
signed char var_33 = (signed char)1;
signed char var_34 = (signed char)-78;
unsigned char var_35 = (unsigned char)142;
unsigned char var_36 = (unsigned char)174;
unsigned long long int var_37 = 9815562020726798978ULL;
unsigned short arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
unsigned int arr_12 [17] ;
int arr_14 [17] [17] ;
unsigned long long int arr_20 [16] [16] ;
unsigned int arr_21 [16] [16] ;
signed char arr_30 [16] [16] [16] ;
unsigned long long int arr_33 [16] [16] [16] ;
unsigned long long int arr_37 [21] [21] ;
unsigned short arr_38 [21] [21] ;
long long int arr_16 [17] [17] ;
unsigned long long int arr_17 [17] ;
signed char arr_18 [17] ;
unsigned short arr_23 [16] [16] ;
unsigned int arr_41 [21] ;
long long int arr_47 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)56709;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)10401;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 2135490307U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = -1332934797;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = 16779340361404926917ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = 3064583666U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 17642273414656533172ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_37 [i_0] [i_1] = 11075968596064497641ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned short)20779;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 3038777287954630714LL : -8302302622592396355LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 16591561163432071905ULL : 14667949949862109043ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)66 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)55726;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = 1752512841U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6451455234262683225LL : 6065117407398894138LL;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
