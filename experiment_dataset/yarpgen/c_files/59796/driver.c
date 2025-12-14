#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -314434100;
int var_1 = -2099811816;
unsigned short var_2 = (unsigned short)52147;
unsigned short var_3 = (unsigned short)61547;
unsigned int var_4 = 3147685734U;
unsigned int var_5 = 4027618480U;
int var_6 = -1182231632;
signed char var_7 = (signed char)-100;
_Bool var_8 = (_Bool)0;
int var_10 = 1372606001;
int zero = 0;
int var_11 = -1725824454;
short var_12 = (short)17055;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)161;
unsigned long long int var_15 = 17527706222303365417ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)3631;
int arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
signed char arr_11 [17] [17] ;
unsigned short arr_3 [12] [12] ;
long long int arr_4 [12] [12] ;
unsigned long long int arr_9 [12] ;
unsigned short arr_12 [17] ;
unsigned short arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -55091088;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-27 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)53580;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 2350843677611705288LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 5357174395165846181ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42285 : (unsigned short)29854;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32269 : (unsigned short)46530;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
