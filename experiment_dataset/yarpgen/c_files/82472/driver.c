#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33503;
signed char var_3 = (signed char)-4;
unsigned short var_4 = (unsigned short)17599;
long long int var_7 = 8349289190492490323LL;
signed char var_8 = (signed char)-22;
int var_9 = -1333345744;
unsigned char var_10 = (unsigned char)249;
unsigned long long int var_12 = 14574739945588079671ULL;
unsigned short var_13 = (unsigned short)54034;
int zero = 0;
short var_14 = (short)-2791;
short var_15 = (short)17155;
unsigned char var_16 = (unsigned char)250;
unsigned char var_17 = (unsigned char)42;
int var_18 = -704221817;
signed char var_19 = (signed char)-13;
unsigned short var_20 = (unsigned short)38877;
unsigned int var_21 = 1676126159U;
unsigned int var_22 = 3954267236U;
unsigned long long int var_23 = 17897807873165028392ULL;
int var_24 = 755783813;
unsigned long long int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_5 [14] [14] [14] [14] ;
_Bool arr_6 [14] [14] ;
signed char arr_7 [14] ;
signed char arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 7463697564398078298ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2133000696825184083ULL : 11177818979749246324ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)50;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
