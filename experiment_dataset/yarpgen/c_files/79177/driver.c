#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-22;
int var_3 = -1986736696;
unsigned short var_4 = (unsigned short)16482;
unsigned short var_5 = (unsigned short)64504;
unsigned char var_6 = (unsigned char)66;
int var_7 = -1365818916;
short var_8 = (short)-14213;
int var_9 = -73544832;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)64;
unsigned char var_15 = (unsigned char)204;
int zero = 0;
int var_16 = 699744058;
unsigned char var_17 = (unsigned char)25;
unsigned char var_18 = (unsigned char)233;
unsigned short var_19 = (unsigned short)59968;
unsigned char var_20 = (unsigned char)140;
_Bool var_21 = (_Bool)0;
int var_22 = 439854972;
int var_23 = 575209927;
unsigned char var_24 = (unsigned char)24;
signed char arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
unsigned long long int arr_3 [11] ;
int arr_4 [11] ;
int arr_5 [11] ;
unsigned char arr_6 [11] ;
unsigned char arr_7 [11] ;
unsigned short arr_12 [11] [11] [11] [11] ;
unsigned short arr_9 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48686;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 184596430690944711ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1454985910 : 1738981078;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1939637544 : 518732567;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55090;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)39945 : (unsigned short)42913;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
