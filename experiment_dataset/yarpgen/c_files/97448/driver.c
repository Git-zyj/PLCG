#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9010;
unsigned int var_1 = 1107474477U;
unsigned long long int var_2 = 17004308325710433458ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3088175885U;
_Bool var_5 = (_Bool)1;
short var_6 = (short)27912;
unsigned short var_7 = (unsigned short)5983;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)203;
short var_10 = (short)25583;
unsigned long long int var_11 = 5961498037605782263ULL;
int var_12 = -727366359;
unsigned int var_13 = 3826067594U;
unsigned short var_14 = (unsigned short)34655;
unsigned char var_15 = (unsigned char)240;
int zero = 0;
int var_16 = 1284634225;
short var_17 = (short)26535;
unsigned short var_18 = (unsigned short)44885;
int var_19 = -41504144;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)116;
long long int var_22 = 2243043548797828286LL;
unsigned char var_23 = (unsigned char)119;
unsigned long long int var_24 = 5947865271822678148ULL;
unsigned long long int var_25 = 15405833299832789955ULL;
unsigned long long int arr_0 [13] ;
signed char arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
unsigned short arr_5 [13] ;
unsigned int arr_6 [13] [13] ;
_Bool arr_9 [13] ;
unsigned int arr_10 [13] ;
short arr_11 [13] [13] ;
long long int arr_13 [13] [13] ;
int arr_14 [13] ;
unsigned short arr_15 [13] [13] [13] ;
unsigned short arr_3 [13] [13] ;
int arr_4 [13] [13] ;
short arr_7 [13] ;
unsigned short arr_8 [13] ;
long long int arr_20 [13] [13] [13] [13] ;
_Bool arr_21 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 17115238001977576314ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)12846;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 2173363033U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 504483266U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (short)16287;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 4677872877786623155LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 807286160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)59403;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)25987;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -388634015;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)-28866;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)36036;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 9122833403673190953LL : 8713998581359863773LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
