#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21098;
unsigned short var_1 = (unsigned short)37332;
long long int var_2 = 3821652813288355145LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)81;
signed char var_5 = (signed char)-86;
unsigned char var_6 = (unsigned char)45;
unsigned char var_7 = (unsigned char)150;
unsigned long long int var_8 = 9849920980066893147ULL;
unsigned short var_9 = (unsigned short)16551;
unsigned long long int var_10 = 149815821263177585ULL;
unsigned long long int var_12 = 1205945977758840876ULL;
int zero = 0;
int var_13 = -1593206733;
int var_14 = -230296369;
unsigned short var_15 = (unsigned short)61077;
unsigned short var_16 = (unsigned short)50473;
int var_17 = 535870232;
unsigned long long int var_18 = 11503745508249740549ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57947;
signed char var_21 = (signed char)-12;
long long int var_22 = 7798508548522512888LL;
_Bool arr_0 [23] [23] ;
signed char arr_1 [23] ;
_Bool arr_2 [23] ;
unsigned int arr_5 [19] ;
unsigned long long int arr_6 [19] ;
short arr_15 [19] ;
unsigned int arr_16 [19] [19] ;
int arr_22 [24] [24] [24] ;
unsigned int arr_24 [24] ;
short arr_26 [24] [24] [24] [24] ;
_Bool arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
long long int arr_9 [19] ;
unsigned char arr_14 [19] [19] ;
unsigned long long int arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1299155847U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 16132662081814856379ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (short)-29834;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 3761386541U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 786302;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = 3716848315U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (short)-29338;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 842662922U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 6503333558447882295LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)58 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 6156640804632840040ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
