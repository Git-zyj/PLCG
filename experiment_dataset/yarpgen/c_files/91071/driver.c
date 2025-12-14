#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6337734876038322903LL;
unsigned short var_1 = (unsigned short)19676;
unsigned char var_2 = (unsigned char)244;
signed char var_3 = (signed char)-49;
unsigned long long int var_5 = 11852822418291260834ULL;
unsigned short var_8 = (unsigned short)31730;
int var_9 = -736048250;
unsigned char var_10 = (unsigned char)68;
long long int var_11 = -4715439693650298989LL;
unsigned char var_17 = (unsigned char)5;
int zero = 0;
unsigned char var_18 = (unsigned char)46;
unsigned int var_19 = 1315650346U;
signed char var_20 = (signed char)-126;
int var_21 = -673397253;
int var_22 = 1518048824;
unsigned long long int var_23 = 2068171419119458683ULL;
unsigned char arr_0 [12] ;
unsigned long long int arr_1 [12] ;
int arr_2 [12] ;
unsigned char arr_4 [12] ;
long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 15161872565144173356ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1487273978;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -4037992846543446395LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
