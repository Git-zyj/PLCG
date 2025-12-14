#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1365037780;
signed char var_2 = (signed char)-65;
short var_3 = (short)-20697;
unsigned long long int var_5 = 6063655420833577168ULL;
short var_7 = (short)1390;
long long int var_8 = 4865307764039065962LL;
unsigned int var_9 = 2742881213U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2859357785U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)64864;
unsigned char var_17 = (unsigned char)151;
signed char var_18 = (signed char)75;
int var_19 = -1284493448;
unsigned long long int var_20 = 13492306002369566728ULL;
unsigned char var_21 = (unsigned char)80;
unsigned long long int var_22 = 12466306452397010710ULL;
short var_23 = (short)4294;
int var_24 = -1598622229;
unsigned long long int var_25 = 11262312868061641804ULL;
int var_26 = 757392454;
unsigned char var_27 = (unsigned char)62;
unsigned long long int var_28 = 4923576661864044207ULL;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_3 [24] ;
unsigned short arr_4 [24] ;
short arr_6 [24] [24] [24] [24] ;
short arr_7 [24] [24] [24] [24] ;
_Bool arr_11 [20] [20] ;
int arr_8 [24] [24] [24] [24] ;
unsigned short arr_16 [17] [17] ;
int arr_17 [17] ;
unsigned long long int arr_26 [17] [17] ;
_Bool arr_29 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9468871001140107018ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 13514016523242628515ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63983 : (unsigned short)53502;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)23104 : (short)18924;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-2244;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 904871877 : -2058341945;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)54558;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = -316531664;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 17049308954341714254ULL : 15511652607202888346ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
