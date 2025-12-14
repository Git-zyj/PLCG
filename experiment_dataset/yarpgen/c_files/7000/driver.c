#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2001541077;
unsigned short var_1 = (unsigned short)23927;
unsigned int var_2 = 162098269U;
unsigned char var_3 = (unsigned char)148;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)17;
unsigned char var_7 = (unsigned char)41;
int var_8 = 1617905684;
unsigned int var_9 = 4026060670U;
unsigned char var_12 = (unsigned char)164;
unsigned short var_13 = (unsigned short)39551;
signed char var_14 = (signed char)-72;
unsigned int var_15 = 1173474185U;
int var_16 = -556582956;
unsigned char var_17 = (unsigned char)204;
signed char var_18 = (signed char)-35;
unsigned int var_19 = 3372009515U;
int zero = 0;
unsigned char var_20 = (unsigned char)188;
unsigned int var_21 = 980803693U;
unsigned short var_22 = (unsigned short)56712;
unsigned short var_23 = (unsigned short)60376;
int var_24 = 1476288724;
_Bool var_25 = (_Bool)1;
int var_26 = 743445799;
unsigned short var_27 = (unsigned short)47926;
unsigned short var_28 = (unsigned short)3682;
unsigned char var_29 = (unsigned char)251;
int var_30 = 1454190324;
signed char var_31 = (signed char)93;
int arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
signed char arr_4 [24] ;
int arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
unsigned int arr_9 [12] ;
unsigned short arr_14 [15] ;
unsigned short arr_3 [21] ;
unsigned char arr_7 [24] [24] ;
_Bool arr_15 [15] ;
_Bool arr_16 [15] [15] [15] ;
int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1310773487;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1225672534;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)38842;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 18126192U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned short)10636;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)40491;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 918438695;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
