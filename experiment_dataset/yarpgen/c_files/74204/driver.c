#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16047928872199064001ULL;
unsigned long long int var_2 = 15866409410637228882ULL;
short var_3 = (short)31285;
unsigned short var_4 = (unsigned short)9308;
unsigned short var_5 = (unsigned short)43137;
unsigned char var_6 = (unsigned char)74;
unsigned long long int var_8 = 1067769254812235082ULL;
short var_10 = (short)12470;
int zero = 0;
unsigned long long int var_11 = 12113470088855001993ULL;
unsigned char var_12 = (unsigned char)22;
unsigned long long int var_13 = 16072039098938656588ULL;
signed char var_14 = (signed char)10;
signed char var_15 = (signed char)-122;
signed char var_16 = (signed char)-87;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned long long int arr_4 [22] [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 495016096236001688ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -550474420;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
