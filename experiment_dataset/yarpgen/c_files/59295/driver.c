#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6234506319231946009LL;
unsigned short var_1 = (unsigned short)2824;
unsigned char var_3 = (unsigned char)191;
long long int var_8 = 8383174419505606221LL;
unsigned long long int var_10 = 10061879058396374813ULL;
unsigned char var_12 = (unsigned char)242;
unsigned long long int var_14 = 10974542726503742497ULL;
int zero = 0;
int var_19 = 772460892;
long long int var_20 = -3922909801848541771LL;
long long int var_21 = -2517625669393640060LL;
int var_22 = -1005658177;
signed char var_23 = (signed char)87;
unsigned short var_24 = (unsigned short)35643;
int var_25 = -1511651389;
long long int var_26 = 9081573517171460775LL;
short var_27 = (short)26064;
unsigned short var_28 = (unsigned short)36796;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 6844351369694071518ULL;
int var_31 = 330647995;
long long int var_32 = 560890837635236652LL;
unsigned char var_33 = (unsigned char)142;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)120;
short var_36 = (short)21788;
unsigned short var_37 = (unsigned short)29432;
short var_38 = (short)30027;
long long int var_39 = 7363148377439796811LL;
unsigned long long int arr_1 [17] ;
signed char arr_2 [17] [17] ;
signed char arr_3 [17] [17] [17] ;
int arr_4 [17] ;
signed char arr_5 [17] [17] [17] ;
long long int arr_7 [17] [17] [17] ;
long long int arr_9 [17] ;
unsigned short arr_10 [17] [17] [17] [17] ;
unsigned int arr_11 [17] [17] [17] ;
int arr_12 [17] [17] [17] [17] ;
long long int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 12566330332917780739ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 782599855;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 884630072746875992LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -8231763769041907392LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)50020;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3147579512U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1356868984;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 4271516770856825789LL;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
