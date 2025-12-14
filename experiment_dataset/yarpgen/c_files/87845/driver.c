#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -786045843;
int var_3 = 286119507;
unsigned char var_4 = (unsigned char)250;
unsigned short var_5 = (unsigned short)7130;
unsigned short var_8 = (unsigned short)48055;
signed char var_10 = (signed char)44;
unsigned short var_11 = (unsigned short)44153;
unsigned short var_12 = (unsigned short)16754;
unsigned long long int var_16 = 16626429022917445500ULL;
int zero = 0;
unsigned long long int var_18 = 16296576769441488194ULL;
unsigned long long int var_19 = 1639655348660444639ULL;
unsigned short var_20 = (unsigned short)55631;
unsigned char var_21 = (unsigned char)223;
unsigned int var_22 = 3827368361U;
unsigned char var_23 = (unsigned char)246;
unsigned int var_24 = 1695127860U;
long long int var_25 = 9122668199383969722LL;
unsigned int arr_1 [20] ;
short arr_4 [20] ;
_Bool arr_6 [24] ;
_Bool arr_7 [24] ;
int arr_9 [24] [24] ;
unsigned short arr_11 [24] ;
signed char arr_5 [20] ;
int arr_8 [24] [24] ;
unsigned short arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1141151170U : 1879969711U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-23950;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 2063465993;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)43909;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 328618640 : 1073055778;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned short)53892;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
