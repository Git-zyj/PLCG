#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
signed char var_2 = (signed char)95;
signed char var_3 = (signed char)68;
unsigned short var_4 = (unsigned short)48584;
unsigned int var_5 = 2339840471U;
signed char var_6 = (signed char)-99;
unsigned int var_8 = 624642385U;
int zero = 0;
unsigned long long int var_10 = 2786075556077286156ULL;
unsigned long long int var_11 = 6499521124212558479ULL;
int var_12 = 647525022;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)19;
unsigned long long int var_15 = 11051634312259067310ULL;
_Bool var_16 = (_Bool)1;
short arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
signed char arr_3 [25] ;
_Bool arr_5 [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-20951;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3432805655U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)135 : (unsigned char)65;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
