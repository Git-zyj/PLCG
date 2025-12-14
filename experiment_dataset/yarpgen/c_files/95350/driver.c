#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7598;
unsigned long long int var_4 = 14982970931527722663ULL;
unsigned char var_5 = (unsigned char)163;
unsigned char var_8 = (unsigned char)74;
unsigned char var_10 = (unsigned char)38;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6454395642848889678LL;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
unsigned long long int var_15 = 15476099477724626828ULL;
unsigned int var_16 = 1028181180U;
short var_17 = (short)-20354;
short var_18 = (short)21743;
unsigned long long int var_19 = 6595579980099269095ULL;
unsigned short var_20 = (unsigned short)24205;
unsigned char var_21 = (unsigned char)14;
unsigned int var_22 = 2609284786U;
unsigned int var_23 = 1435327974U;
unsigned short arr_0 [13] ;
unsigned char arr_5 [13] ;
unsigned int arr_9 [24] ;
unsigned short arr_10 [24] ;
long long int arr_11 [24] ;
long long int arr_16 [12] [12] ;
short arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)65020;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)225 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 4202932660U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39465 : (unsigned short)12185;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -3967244171296174793LL : -4857065807896256518LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = -7203834826378219762LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)11449;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
