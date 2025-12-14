#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11347660877734222117ULL;
unsigned long long int var_1 = 10439941333494039388ULL;
unsigned long long int var_8 = 10374834583671406099ULL;
unsigned short var_10 = (unsigned short)17364;
unsigned char var_13 = (unsigned char)68;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)22276;
long long int var_17 = -5778513293588278427LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)18630;
short var_20 = (short)24598;
unsigned char var_21 = (unsigned char)193;
long long int var_22 = -8620766151368928339LL;
unsigned short var_23 = (unsigned short)24213;
unsigned short var_24 = (unsigned short)57414;
int var_25 = -128965669;
unsigned long long int arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
_Bool arr_6 [24] ;
unsigned short arr_7 [24] [24] ;
unsigned char arr_11 [24] ;
unsigned long long int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9823736636963764426ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 432471331U : 1388772143U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)31582;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)90 : (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1049844121002881434ULL : 2035971653310448791ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
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
