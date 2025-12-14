#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2700522949344681294LL;
short var_2 = (short)-9519;
unsigned short var_6 = (unsigned short)42610;
unsigned short var_7 = (unsigned short)13655;
long long int var_8 = -1455862402628135779LL;
short var_10 = (short)20959;
unsigned char var_11 = (unsigned char)237;
unsigned char var_12 = (unsigned char)41;
unsigned long long int var_13 = 18217274565088028600ULL;
short var_18 = (short)31392;
short var_19 = (short)26503;
int zero = 0;
short var_20 = (short)-14242;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-12979;
unsigned short var_23 = (unsigned short)48604;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_2 [25] ;
long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 13719792148884814222ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 2575353343016642767LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
