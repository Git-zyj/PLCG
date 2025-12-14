#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1142493160U;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)194;
int var_5 = -2110639328;
unsigned char var_6 = (unsigned char)109;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2943896140382563722LL;
unsigned int var_11 = 1746081120U;
unsigned short var_13 = (unsigned short)31211;
int zero = 0;
signed char var_15 = (signed char)-122;
unsigned int var_16 = 388011103U;
short var_17 = (short)29226;
int var_18 = -1285287279;
signed char var_19 = (signed char)25;
int var_20 = 1342511041;
unsigned long long int var_21 = 13680704012133491209ULL;
signed char var_22 = (signed char)119;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)49028;
long long int var_25 = -9009296575058578941LL;
long long int arr_1 [15] ;
signed char arr_2 [17] [17] ;
unsigned int arr_3 [17] ;
short arr_6 [15] ;
unsigned short arr_4 [17] [17] ;
int arr_5 [17] ;
unsigned int arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -910642750316038464LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4125550016U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-20530;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)19368;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -853313746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1160052911U : 3862938730U;
}

void checksum() {
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
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
