#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1996;
unsigned char var_1 = (unsigned char)158;
unsigned long long int var_2 = 6542618452367024018ULL;
unsigned long long int var_3 = 16773728670855702453ULL;
unsigned short var_4 = (unsigned short)60412;
unsigned long long int var_5 = 16727479072561906365ULL;
unsigned long long int var_6 = 13231779549433725256ULL;
long long int var_7 = -6481203945883198954LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15619820824957806012ULL;
unsigned long long int var_10 = 9684135699111761798ULL;
unsigned long long int var_11 = 13368290862708637268ULL;
int zero = 0;
unsigned long long int var_12 = 9465769165389003419ULL;
short var_13 = (short)-237;
unsigned long long int var_14 = 6561317311042969996ULL;
unsigned long long int var_15 = 17519289164127521714ULL;
unsigned long long int var_16 = 10299081008654483357ULL;
unsigned short var_17 = (unsigned short)16152;
long long int var_18 = 722213878572256416LL;
unsigned short var_19 = (unsigned short)16250;
unsigned long long int var_20 = 17256920416051296718ULL;
int var_21 = 395335164;
short var_22 = (short)-13108;
unsigned short var_23 = (unsigned short)4923;
int var_24 = 52054881;
unsigned long long int var_25 = 14217165781641254893ULL;
unsigned long long int var_26 = 13561922877018217929ULL;
unsigned short var_27 = (unsigned short)45872;
unsigned long long int var_28 = 18251254084415212963ULL;
unsigned long long int var_29 = 1372193410239890515ULL;
unsigned short arr_1 [11] [11] ;
long long int arr_2 [19] [19] ;
_Bool arr_3 [19] ;
unsigned char arr_4 [19] [19] ;
unsigned char arr_5 [19] [19] ;
long long int arr_7 [17] ;
int arr_8 [17] ;
long long int arr_9 [17] [17] [17] ;
unsigned char arr_10 [17] [17] ;
unsigned short arr_11 [17] ;
short arr_12 [17] [17] ;
unsigned long long int arr_16 [17] [17] ;
short arr_17 [17] [17] [17] ;
int arr_6 [19] ;
int arr_13 [17] ;
long long int arr_18 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59928;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -8900092766117744128LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 5649249456375169904LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -976840595;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -2148804034812327496LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)9921;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (short)18026;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = 15319691045742134435ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)13258;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1053602680;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 462946794;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = -419646915094525662LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
