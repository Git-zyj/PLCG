#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9150;
unsigned int var_3 = 1494527550U;
signed char var_4 = (signed char)-15;
unsigned short var_7 = (unsigned short)51051;
short var_9 = (short)23318;
long long int var_11 = -1792531346033830735LL;
unsigned long long int var_12 = 1307197661333269252ULL;
int zero = 0;
unsigned int var_13 = 194519536U;
unsigned char var_14 = (unsigned char)103;
unsigned char var_15 = (unsigned char)170;
signed char var_16 = (signed char)2;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-85;
unsigned long long int var_19 = 15067243574683176746ULL;
int var_20 = -902963741;
short var_21 = (short)12907;
long long int var_22 = -729884280564138475LL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)96;
long long int arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned int arr_2 [12] [12] ;
unsigned int arr_4 [12] ;
short arr_5 [12] [12] [12] [12] ;
unsigned long long int arr_6 [12] ;
unsigned char arr_9 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 7302223422035928458LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 8858510699823457569LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 2363548343U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 3539298828U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-8838;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 16548519703668885835ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)59;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
