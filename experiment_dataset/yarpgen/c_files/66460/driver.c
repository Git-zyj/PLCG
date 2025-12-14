#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11627;
unsigned char var_1 = (unsigned char)191;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)142;
int var_5 = 1044487949;
int var_6 = 467415538;
int var_9 = 851986939;
long long int var_11 = -8411995621661829938LL;
int var_14 = 1944810554;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = 292154747;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)14382;
long long int var_19 = 5104231685999576783LL;
unsigned short var_20 = (unsigned short)2321;
unsigned char arr_0 [10] [10] ;
int arr_4 [10] [10] ;
unsigned char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -475682364;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)57;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
