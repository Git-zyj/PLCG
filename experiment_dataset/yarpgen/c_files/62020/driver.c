#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2029908945470880506ULL;
short var_4 = (short)-3825;
unsigned long long int var_5 = 4229959740231961952ULL;
unsigned long long int var_6 = 16646699650785684861ULL;
long long int var_8 = -6590086251677216869LL;
unsigned int var_9 = 3882565395U;
unsigned int var_10 = 311558142U;
int var_11 = -718665458;
int zero = 0;
long long int var_12 = -1165694231324125782LL;
int var_13 = 2036800002;
_Bool var_14 = (_Bool)0;
int var_15 = -442351376;
signed char var_16 = (signed char)-15;
long long int var_17 = -259437223469004345LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)213;
signed char var_20 = (signed char)72;
unsigned int var_21 = 3523937900U;
unsigned long long int var_22 = 5908439653919167730ULL;
signed char var_23 = (signed char)-51;
unsigned char var_24 = (unsigned char)243;
signed char var_25 = (signed char)21;
unsigned char var_26 = (unsigned char)222;
unsigned int var_27 = 2983351650U;
long long int var_28 = -7266836827212236155LL;
unsigned long long int var_29 = 9066271897276625998ULL;
unsigned int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
int arr_2 [24] ;
unsigned char arr_4 [24] ;
unsigned int arr_5 [24] [24] ;
unsigned short arr_7 [24] [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] ;
unsigned char arr_12 [24] ;
unsigned short arr_14 [24] [24] [24] ;
int arr_15 [24] [24] [24] ;
_Bool arr_19 [24] ;
unsigned long long int arr_21 [24] [24] [24] [24] ;
int arr_22 [24] [24] [24] ;
unsigned short arr_24 [24] [24] ;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1778928791U : 2573319641U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2621896115385827804ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1374769085 : -674431890;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1271438908U : 2000500516U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12358;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14947914938080769310ULL : 17847925205356593227ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)53835;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -534503672;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 116144980410155705ULL : 4443149811364138547ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 1781318525;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)50493;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61961 : (unsigned short)8013;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
