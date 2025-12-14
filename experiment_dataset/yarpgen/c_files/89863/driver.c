#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -461792487;
long long int var_1 = 4907210200347599540LL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)5;
short var_4 = (short)-2002;
unsigned char var_5 = (unsigned char)58;
signed char var_6 = (signed char)59;
unsigned int var_7 = 2708746813U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2664803U;
int zero = 0;
long long int var_10 = 2924833185491431248LL;
unsigned long long int var_11 = 12926570870357701179ULL;
short var_12 = (short)-18244;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2824180867U;
unsigned int var_15 = 1963114129U;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4339389145743109097LL;
unsigned int var_18 = 2082518968U;
unsigned short var_19 = (unsigned short)45376;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)58565;
unsigned char arr_0 [15] ;
signed char arr_1 [15] [15] ;
int arr_2 [15] ;
long long int arr_3 [15] [15] [15] ;
unsigned char arr_5 [15] [15] ;
_Bool arr_8 [11] ;
signed char arr_15 [11] [11] [11] [11] ;
unsigned long long int arr_18 [11] [11] [11] [11] ;
int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -199967824;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8637468348875602838LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)53 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 2385473137740623632ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1170720898 : -152706238;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
