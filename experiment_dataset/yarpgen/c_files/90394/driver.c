#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1297788656U;
unsigned int var_1 = 753383482U;
unsigned char var_3 = (unsigned char)15;
unsigned long long int var_6 = 9266441903754982962ULL;
int var_8 = 940315147;
long long int var_9 = -5600299735653671335LL;
unsigned char var_11 = (unsigned char)40;
unsigned char var_12 = (unsigned char)26;
short var_13 = (short)31151;
short var_15 = (short)-30736;
int zero = 0;
short var_17 = (short)13246;
unsigned long long int var_18 = 5971141691704235574ULL;
unsigned long long int var_19 = 12429005273815797831ULL;
short var_20 = (short)31553;
short var_21 = (short)26383;
signed char var_22 = (signed char)85;
unsigned long long int var_23 = 13160326824732836097ULL;
signed char var_24 = (signed char)-14;
short var_25 = (short)-12696;
_Bool arr_3 [15] ;
short arr_5 [15] [15] ;
signed char arr_9 [20] ;
unsigned short arr_13 [24] ;
signed char arr_2 [14] ;
unsigned int arr_7 [15] ;
unsigned int arr_8 [15] ;
unsigned char arr_11 [20] ;
unsigned int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)25449;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned short)17679;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2972843812U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1543965774U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 703524278U : 3806255506U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
