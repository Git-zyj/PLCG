#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
signed char var_1 = (signed char)115;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)96;
signed char var_4 = (signed char)21;
short var_6 = (short)17903;
int var_7 = 494208201;
signed char var_8 = (signed char)-39;
int var_9 = 1181735475;
int var_10 = 1348442770;
int zero = 0;
int var_11 = 1348764004;
unsigned char var_12 = (unsigned char)153;
signed char var_13 = (signed char)-50;
unsigned char var_14 = (unsigned char)65;
long long int var_15 = 1574933902386298999LL;
short var_16 = (short)6919;
unsigned int var_17 = 3133858439U;
int var_18 = -1409025866;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4081317328U;
int var_21 = -1542622538;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-89;
short arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned short arr_4 [24] ;
unsigned int arr_5 [25] [25] ;
long long int arr_6 [25] ;
int arr_7 [25] ;
long long int arr_10 [19] ;
long long int arr_8 [25] ;
int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-30172;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -908954548;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)32325;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 2483697880U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -2269148866437605133LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -1356335043;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = -2305836209343206720LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -6525330200890873247LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 1944219200;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
