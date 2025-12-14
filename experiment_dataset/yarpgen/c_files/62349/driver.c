#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -251659675718373242LL;
unsigned long long int var_3 = 6056433616892887307ULL;
unsigned char var_4 = (unsigned char)184;
unsigned long long int var_15 = 6132145609722857470ULL;
int zero = 0;
int var_16 = 1942789089;
unsigned short var_17 = (unsigned short)48913;
unsigned char var_18 = (unsigned char)193;
unsigned short var_19 = (unsigned short)8398;
unsigned int var_20 = 848905862U;
unsigned long long int var_21 = 10232022856485870791ULL;
short var_22 = (short)-21696;
unsigned char var_23 = (unsigned char)33;
unsigned int var_24 = 559285466U;
unsigned char var_25 = (unsigned char)117;
signed char var_26 = (signed char)48;
signed char var_27 = (signed char)43;
unsigned short arr_0 [10] ;
long long int arr_1 [10] ;
short arr_2 [10] ;
unsigned int arr_6 [10] [10] ;
unsigned long long int arr_8 [10] [10] ;
short arr_10 [23] ;
unsigned short arr_11 [23] ;
int arr_3 [10] ;
unsigned int arr_9 [10] ;
int arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)1777;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 6983889133394356281LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)19417 : (short)-28339;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 3783065432U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 972386393572126123ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)-15439;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)47656;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 243613237 : -637347213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3926037875U : 2886527890U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = -1081138434;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
