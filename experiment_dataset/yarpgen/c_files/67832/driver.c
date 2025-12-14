#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1986858589;
unsigned char var_1 = (unsigned char)246;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)74;
int var_6 = -1350960800;
unsigned char var_8 = (unsigned char)228;
unsigned long long int var_9 = 15687347613276687044ULL;
short var_10 = (short)4828;
signed char var_11 = (signed char)-123;
unsigned short var_12 = (unsigned short)4252;
int zero = 0;
signed char var_13 = (signed char)-111;
short var_14 = (short)-13597;
unsigned long long int var_15 = 11058610318589870223ULL;
long long int var_16 = 1506933508964133595LL;
unsigned int var_17 = 3980535903U;
_Bool var_18 = (_Bool)1;
int var_19 = 1049288926;
unsigned int var_20 = 72669035U;
unsigned int var_21 = 1902918339U;
int var_22 = -390805351;
unsigned int var_23 = 1751754477U;
unsigned char var_24 = (unsigned char)16;
long long int arr_1 [10] [10] ;
long long int arr_4 [20] ;
unsigned short arr_5 [20] ;
signed char arr_7 [18] ;
int arr_8 [18] ;
unsigned char arr_10 [23] ;
unsigned int arr_11 [23] ;
unsigned short arr_12 [23] ;
long long int arr_13 [23] ;
unsigned int arr_2 [10] ;
unsigned char arr_3 [10] ;
short arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -6596498743180784147LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3823554527070429917LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)23067;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 835615372;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 2639067729U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)11903;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 5922550459011741873LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3429834488U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-16985;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
