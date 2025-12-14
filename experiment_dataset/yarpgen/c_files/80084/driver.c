#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14179;
unsigned char var_1 = (unsigned char)170;
int var_2 = 341599113;
_Bool var_3 = (_Bool)1;
long long int var_5 = 7361932095906517052LL;
unsigned short var_8 = (unsigned short)10954;
unsigned char var_9 = (unsigned char)196;
int var_11 = -1464052107;
unsigned int var_13 = 1306658348U;
int zero = 0;
unsigned char var_16 = (unsigned char)71;
short var_17 = (short)-14422;
unsigned char var_18 = (unsigned char)8;
short var_19 = (short)-32332;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)199;
unsigned char var_22 = (unsigned char)230;
unsigned char var_23 = (unsigned char)21;
unsigned char arr_1 [19] ;
unsigned char arr_2 [19] ;
short arr_14 [19] [19] [19] [19] [19] ;
long long int arr_9 [19] [19] [19] [19] ;
int arr_15 [19] ;
unsigned short arr_21 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)17736 : (short)-22646;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -4838576809230024430LL : -5326907064570208362LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -1701194466;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)43884;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
