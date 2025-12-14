#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31615;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-14;
int var_3 = 116810134;
unsigned int var_4 = 1811675131U;
unsigned int var_5 = 1266225230U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2550107295182586553LL;
int zero = 0;
unsigned int var_10 = 970470277U;
int var_11 = -731984846;
unsigned long long int var_12 = 12433787075061447256ULL;
unsigned char var_13 = (unsigned char)29;
int var_14 = 1220021691;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1861559881U;
signed char var_17 = (signed char)117;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [25] ;
long long int arr_2 [25] ;
_Bool arr_3 [25] [25] ;
unsigned short arr_4 [25] ;
unsigned char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 10393951237641795171ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -8378028181124369532LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)6856;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)25 : (unsigned char)197;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
