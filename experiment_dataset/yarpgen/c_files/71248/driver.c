#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)57;
unsigned short var_6 = (unsigned short)38663;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)25671;
unsigned short var_11 = (unsigned short)59223;
long long int var_16 = 833521397705285700LL;
int zero = 0;
short var_17 = (short)3551;
unsigned char var_18 = (unsigned char)221;
unsigned long long int var_19 = 13652786602029658962ULL;
unsigned char var_20 = (unsigned char)204;
signed char var_21 = (signed char)-3;
signed char var_22 = (signed char)-33;
unsigned long long int var_23 = 5916109909324021646ULL;
long long int var_24 = 111487080275101125LL;
short var_25 = (short)-16640;
unsigned short arr_2 [22] [22] [22] ;
long long int arr_5 [13] ;
short arr_7 [13] [13] [13] ;
short arr_9 [13] [13] [13] ;
_Bool arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)42218;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -3477023477733850755LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-22316;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-7821;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
