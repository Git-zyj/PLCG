#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7090;
int var_1 = -565444588;
unsigned short var_2 = (unsigned short)56932;
unsigned int var_4 = 3045141501U;
short var_5 = (short)-3820;
unsigned int var_6 = 3937475051U;
int var_7 = 1233483816;
unsigned long long int var_8 = 11753043405254413479ULL;
unsigned long long int var_9 = 6014232580733794402ULL;
long long int var_10 = -6064827438873854292LL;
unsigned long long int var_11 = 9638483717616324403ULL;
int var_12 = 2084519935;
int zero = 0;
int var_13 = -1257175195;
signed char var_14 = (signed char)93;
signed char var_15 = (signed char)37;
int var_16 = 1488233690;
unsigned short var_17 = (unsigned short)53619;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_1 [22] ;
unsigned short arr_5 [22] ;
int arr_6 [22] [22] [22] ;
unsigned long long int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1814024368689884352ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2243 : (unsigned short)10349;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -680515667 : 1537215082;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4524149243181169748ULL : 9838192630581093461ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
