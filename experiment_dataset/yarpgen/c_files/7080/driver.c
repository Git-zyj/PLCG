#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27883;
unsigned long long int var_2 = 9662357375078698796ULL;
short var_3 = (short)-21022;
unsigned short var_5 = (unsigned short)21905;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 1890849776482047157ULL;
signed char var_10 = (signed char)-113;
unsigned char var_11 = (unsigned char)80;
unsigned char var_12 = (unsigned char)181;
unsigned char var_13 = (unsigned char)111;
unsigned int var_14 = 3832824736U;
unsigned int var_15 = 3662173038U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)37950;
int var_20 = 932853869;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)64484;
int var_24 = 477790984;
signed char var_25 = (signed char)-107;
signed char var_26 = (signed char)-72;
int var_27 = 1954899808;
unsigned char arr_0 [14] ;
int arr_1 [14] ;
signed char arr_5 [14] ;
unsigned int arr_8 [14] [14] [14] ;
signed char arr_9 [14] [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] ;
int arr_11 [14] [14] [14] [14] ;
unsigned int arr_12 [14] [14] ;
_Bool arr_2 [14] ;
unsigned char arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1447967547;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1455672637U : 2277105123U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 15955912216457715633ULL : 9851393264680250556ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -1234032723;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 154344768U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)247 : (unsigned char)149;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
