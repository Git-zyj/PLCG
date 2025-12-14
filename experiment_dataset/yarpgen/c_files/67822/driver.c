#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1353;
long long int var_1 = -8942767761698348897LL;
unsigned long long int var_4 = 9619786938486941017ULL;
unsigned char var_5 = (unsigned char)224;
unsigned long long int var_8 = 7636019338367956593ULL;
int var_9 = 640631997;
long long int var_14 = 8224891588010776407LL;
int zero = 0;
short var_15 = (short)-26425;
unsigned long long int var_16 = 16970840821020669862ULL;
int var_17 = 743301567;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)253;
unsigned short arr_1 [24] [24] ;
short arr_2 [24] ;
int arr_6 [24] ;
unsigned char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)54779;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)18707;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1262643340;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)201;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
