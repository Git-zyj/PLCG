#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)43954;
short var_3 = (short)2318;
signed char var_4 = (signed char)-113;
unsigned int var_5 = 270761954U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1985317299U;
short var_9 = (short)-533;
int zero = 0;
short var_10 = (short)10581;
int var_11 = 1442585448;
signed char var_12 = (signed char)-14;
unsigned char var_13 = (unsigned char)134;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1455500869438965867ULL;
signed char var_16 = (signed char)115;
signed char var_17 = (signed char)84;
unsigned char var_18 = (unsigned char)187;
short var_19 = (short)7574;
unsigned long long int var_20 = 267564646579694672ULL;
long long int var_21 = 8018825713768062382LL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)133;
unsigned long long int var_24 = 1860529268868037087ULL;
_Bool var_25 = (_Bool)1;
short arr_0 [11] [11] ;
signed char arr_1 [11] ;
short arr_2 [17] ;
short arr_5 [17] [17] ;
unsigned long long int arr_7 [17] ;
unsigned short arr_14 [17] [17] [17] [17] ;
long long int arr_18 [17] ;
unsigned long long int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-5250;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)31192 : (short)-12932;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-22275;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 17228505533844597947ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31542;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = -872176546835085725LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 11372583418604745898ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
