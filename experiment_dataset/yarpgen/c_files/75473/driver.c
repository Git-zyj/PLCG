#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5912537057805668538ULL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-26314;
unsigned short var_6 = (unsigned short)22521;
unsigned long long int var_15 = 1074080647561597202ULL;
int zero = 0;
unsigned int var_17 = 742216796U;
unsigned long long int var_18 = 13963716063412669700ULL;
unsigned long long int var_19 = 16030101583622356886ULL;
unsigned short var_20 = (unsigned short)46673;
unsigned long long int arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2873909261597376788ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 13540238229029263653ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 15843794227681939224ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
