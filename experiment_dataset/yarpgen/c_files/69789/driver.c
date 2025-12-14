#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13877;
unsigned char var_1 = (unsigned char)143;
unsigned int var_2 = 1127258143U;
unsigned int var_3 = 1859355448U;
unsigned short var_6 = (unsigned short)9082;
int var_7 = -1265268622;
unsigned long long int var_8 = 2959024684758370041ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)9;
_Bool var_12 = (_Bool)0;
long long int var_13 = -474652404761887000LL;
unsigned short var_14 = (unsigned short)40803;
unsigned char var_15 = (unsigned char)212;
unsigned int var_16 = 2224611427U;
unsigned char var_17 = (unsigned char)221;
unsigned int var_18 = 3052536346U;
int var_19 = -1053399591;
int var_20 = -2047888556;
unsigned char var_21 = (unsigned char)148;
short arr_0 [17] [17] ;
short arr_1 [17] ;
_Bool arr_2 [17] [17] ;
_Bool arr_6 [23] [23] ;
unsigned char arr_7 [23] ;
int arr_9 [23] ;
int arr_11 [10] [10] ;
unsigned char arr_12 [10] ;
long long int arr_4 [17] ;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31306;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)9635;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1255721839 : -1650258444;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = -839094394;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -7074372330123167920LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-51;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
