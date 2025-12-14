#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned long long int var_2 = 2672651529183366417ULL;
short var_3 = (short)-11193;
int var_5 = 301914157;
unsigned int var_6 = 174953594U;
signed char var_7 = (signed char)56;
unsigned int var_9 = 2187912316U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 538710563U;
short var_12 = (short)-5794;
long long int var_13 = 6090159843972736364LL;
int var_14 = -190117188;
unsigned short var_17 = (unsigned short)38758;
int zero = 0;
unsigned short var_18 = (unsigned short)10475;
unsigned char var_19 = (unsigned char)39;
unsigned short var_20 = (unsigned short)36469;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)130;
unsigned int var_23 = 853800142U;
int var_24 = 1755195196;
_Bool var_25 = (_Bool)0;
unsigned long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
_Bool arr_4 [11] ;
_Bool arr_5 [11] ;
unsigned int arr_10 [11] [11] [11] ;
unsigned char arr_2 [10] ;
int arr_3 [10] ;
unsigned char arr_18 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 10461650020782867106ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3886256940U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1155532255U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 165109227;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)128 : (unsigned char)66;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
