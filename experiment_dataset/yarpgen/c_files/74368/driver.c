#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned int var_1 = 2002743196U;
long long int var_3 = -8624811483589349937LL;
long long int var_4 = -1069290983000592873LL;
unsigned char var_5 = (unsigned char)212;
signed char var_8 = (signed char)-11;
unsigned long long int var_9 = 15224177404555905730ULL;
unsigned char var_10 = (unsigned char)188;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 14907953687236974448ULL;
int var_13 = 1090568950;
int var_15 = -79814155;
unsigned long long int var_17 = 10637168955161436023ULL;
int var_18 = -346061317;
int zero = 0;
unsigned int var_20 = 3770205950U;
unsigned char var_21 = (unsigned char)24;
unsigned char var_22 = (unsigned char)29;
unsigned char var_23 = (unsigned char)89;
unsigned char var_24 = (unsigned char)17;
unsigned short var_25 = (unsigned short)38260;
int arr_0 [19] ;
short arr_1 [19] [19] ;
_Bool arr_2 [19] [19] ;
unsigned char arr_3 [19] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1975522167 : 1125985376;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-26106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54506 : (unsigned short)17568;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
