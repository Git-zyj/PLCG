#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)32239;
signed char var_5 = (signed char)28;
unsigned short var_6 = (unsigned short)6927;
unsigned int var_8 = 2268019634U;
long long int var_9 = -6523782188264981476LL;
signed char var_10 = (signed char)104;
signed char var_11 = (signed char)92;
int var_13 = -1695512960;
unsigned char var_14 = (unsigned char)58;
unsigned short var_16 = (unsigned short)2259;
int zero = 0;
int var_17 = -867163407;
unsigned short var_18 = (unsigned short)56426;
int var_19 = -723448207;
unsigned short var_20 = (unsigned short)29097;
signed char var_21 = (signed char)127;
unsigned char var_22 = (unsigned char)30;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)4;
signed char var_26 = (signed char)-85;
unsigned int var_27 = 286922422U;
unsigned char var_28 = (unsigned char)135;
unsigned int var_29 = 2206798110U;
signed char arr_0 [17] [17] ;
short arr_1 [17] ;
unsigned char arr_3 [17] ;
_Bool arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned long long int arr_7 [17] [17] ;
signed char arr_9 [17] ;
unsigned char arr_10 [17] ;
unsigned short arr_11 [17] ;
_Bool arr_14 [17] ;
unsigned int arr_15 [17] [17] ;
signed char arr_16 [17] ;
unsigned int arr_18 [17] [17] ;
unsigned char arr_2 [17] ;
_Bool arr_12 [17] [17] ;
unsigned char arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)8480;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)115 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 10564363395121229083ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 13698498076302516783ULL : 4668596184757430275ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)29380;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 1396969659U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 1151936822U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)242 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned char)37;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
