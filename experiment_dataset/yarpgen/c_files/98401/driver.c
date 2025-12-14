#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
long long int var_3 = 4184442005605150980LL;
unsigned short var_4 = (unsigned short)29747;
unsigned int var_5 = 4008994347U;
int var_10 = -1339889523;
unsigned long long int var_11 = 1771553955566277755ULL;
long long int var_12 = -7498391822469810178LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)253;
unsigned long long int var_18 = 5644501978003907605ULL;
int zero = 0;
short var_19 = (short)-25199;
int var_20 = 799288113;
int var_21 = -1966722064;
long long int var_22 = 6617093782759450126LL;
unsigned long long int var_23 = 2972819880587440676ULL;
unsigned short var_24 = (unsigned short)35216;
int var_25 = 605038170;
unsigned short arr_0 [15] ;
_Bool arr_1 [15] ;
int arr_2 [18] ;
int arr_3 [18] ;
_Bool arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)16282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -484062057;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 391572309;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
