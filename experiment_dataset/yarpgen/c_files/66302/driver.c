#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5740279324201170555ULL;
unsigned int var_3 = 699125885U;
short var_4 = (short)5587;
_Bool var_7 = (_Bool)0;
short var_8 = (short)29957;
signed char var_9 = (signed char)-73;
long long int var_10 = -6646576995112923804LL;
unsigned int var_11 = 520832680U;
unsigned int var_12 = 3849427289U;
unsigned long long int var_14 = 18334239516186161905ULL;
long long int var_15 = 4085387266624436263LL;
int zero = 0;
unsigned int var_17 = 2821465707U;
unsigned int var_18 = 210981747U;
unsigned char var_19 = (unsigned char)229;
unsigned char var_20 = (unsigned char)134;
unsigned long long int var_21 = 8805143849223289112ULL;
unsigned long long int var_22 = 6401996296186054613ULL;
unsigned short var_23 = (unsigned short)31205;
unsigned char var_24 = (unsigned char)138;
unsigned char var_25 = (unsigned char)143;
unsigned short var_26 = (unsigned short)6956;
unsigned char var_27 = (unsigned char)79;
unsigned long long int var_28 = 311944429151778929ULL;
short arr_2 [21] ;
_Bool arr_3 [21] ;
_Bool arr_6 [21] ;
short arr_8 [21] [21] [21] [21] [21] ;
short arr_11 [21] ;
short arr_13 [21] ;
unsigned long long int arr_15 [21] [21] [21] ;
unsigned int arr_19 [21] ;
signed char arr_20 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)10055;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)4776;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)-15889;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)13707 : (short)-8037;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10882998278821844970ULL : 3444679332197745927ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 530557478U : 1361390516U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)19 : (signed char)30;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
