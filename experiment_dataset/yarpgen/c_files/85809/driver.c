#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16106;
unsigned short var_1 = (unsigned short)62286;
unsigned char var_2 = (unsigned char)192;
signed char var_3 = (signed char)-72;
unsigned long long int var_5 = 6539414434659809647ULL;
unsigned long long int var_6 = 1291667996183266720ULL;
short var_7 = (short)3177;
long long int var_8 = -468228059321003632LL;
signed char var_9 = (signed char)-120;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-105;
unsigned long long int var_13 = 9488598263451772406ULL;
int zero = 0;
signed char var_14 = (signed char)20;
int var_15 = 1824334233;
unsigned char var_16 = (unsigned char)146;
_Bool var_17 = (_Bool)1;
short var_18 = (short)18427;
signed char var_19 = (signed char)(-127 - 1);
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)123;
unsigned short arr_2 [14] ;
unsigned char arr_5 [15] ;
signed char arr_9 [15] [15] ;
unsigned char arr_10 [15] ;
unsigned int arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3002 : (unsigned short)628;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-45 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 3783287810U : 1415430853U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
