#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9009275322339235842ULL;
int var_1 = -726995492;
long long int var_2 = -5626336029652520050LL;
unsigned int var_3 = 1062951490U;
unsigned short var_4 = (unsigned short)49666;
int var_5 = 831465564;
unsigned char var_6 = (unsigned char)244;
unsigned char var_7 = (unsigned char)105;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-6112;
unsigned int var_10 = 2514765084U;
unsigned int var_11 = 954219563U;
short var_12 = (short)-30060;
_Bool var_13 = (_Bool)1;
int var_14 = 1719798733;
_Bool var_15 = (_Bool)0;
short var_16 = (short)21281;
unsigned long long int var_17 = 11094903119064331041ULL;
int zero = 0;
short var_18 = (short)23987;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4666710129079558884ULL;
int var_21 = -1885283360;
int var_22 = -1505690490;
unsigned char var_23 = (unsigned char)18;
short var_24 = (short)-46;
unsigned long long int var_25 = 3759251640655215693ULL;
unsigned short var_26 = (unsigned short)53085;
short var_27 = (short)-4558;
unsigned char var_28 = (unsigned char)37;
unsigned short var_29 = (unsigned short)23851;
long long int var_30 = -6941547824256468330LL;
_Bool var_31 = (_Bool)0;
short var_32 = (short)11158;
short var_33 = (short)3753;
short arr_0 [20] [20] ;
int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
unsigned char arr_3 [20] ;
int arr_4 [20] ;
_Bool arr_5 [20] [20] ;
int arr_7 [17] ;
int arr_8 [17] [17] ;
unsigned long long int arr_10 [13] ;
unsigned long long int arr_11 [13] ;
int arr_12 [13] [13] ;
_Bool arr_14 [13] ;
int arr_15 [13] [13] ;
unsigned long long int arr_19 [12] ;
long long int arr_20 [12] [12] ;
_Bool arr_6 [20] ;
unsigned char arr_9 [17] [17] ;
long long int arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)19482 : (short)-9559;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -1674920724;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1053697104U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1015886173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -50243481;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -256850200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 6546412161339504905ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 10279573862618442659ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 1985124460;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = -544728218;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 4661533013591017590ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 106041723096233328LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)60 : (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = -6486196837989608386LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
