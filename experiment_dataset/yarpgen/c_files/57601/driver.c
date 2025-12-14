#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6386725311392460774LL;
unsigned short var_8 = (unsigned short)31511;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6003830455246658277ULL;
signed char var_16 = (signed char)98;
unsigned long long int var_17 = 4640183203020555792ULL;
int zero = 0;
short var_18 = (short)-22336;
unsigned long long int var_19 = 6181313740825833373ULL;
long long int var_20 = 65184995319115103LL;
unsigned long long int var_21 = 12768585916828523662ULL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-30784;
int var_24 = 1442786040;
unsigned long long int var_25 = 10364357405547892057ULL;
short var_26 = (short)-25625;
long long int var_27 = -5175135478963051995LL;
unsigned long long int var_28 = 12060973358393255439ULL;
unsigned short var_29 = (unsigned short)29954;
unsigned short arr_3 [11] [11] [11] ;
short arr_7 [18] ;
unsigned int arr_8 [18] ;
unsigned char arr_10 [20] ;
unsigned short arr_11 [20] ;
int arr_15 [17] ;
int arr_6 [11] ;
unsigned long long int arr_9 [18] ;
_Bool arr_14 [20] ;
short arr_17 [17] ;
unsigned long long int arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)18305 : (unsigned short)29937;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-28163 : (short)28200;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 3674948363U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned short)54656;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = -625159044;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1229111492 : 1969256566;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 5413827677051868683ULL : 8008599327933301481ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (short)5738;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 10957910318929982087ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
