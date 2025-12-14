#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42237;
unsigned short var_1 = (unsigned short)31918;
unsigned long long int var_2 = 9512349449278093457ULL;
unsigned char var_3 = (unsigned char)25;
unsigned short var_4 = (unsigned short)64377;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-82;
short var_7 = (short)28434;
int var_8 = 356486897;
unsigned long long int var_10 = 17441952633050065860ULL;
unsigned long long int var_11 = 12974138201947861629ULL;
int var_12 = -2053996532;
unsigned short var_13 = (unsigned short)18818;
int zero = 0;
unsigned short var_14 = (unsigned short)33642;
long long int var_15 = 1142999381555001660LL;
signed char var_16 = (signed char)-63;
signed char var_17 = (signed char)21;
signed char var_18 = (signed char)100;
unsigned short arr_1 [22] ;
unsigned long long int arr_7 [22] [22] ;
unsigned char arr_9 [22] ;
unsigned char arr_10 [22] ;
short arr_11 [22] [22] ;
short arr_18 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23413 : (unsigned short)41764;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 11471423594285815330ULL : 2830992026413445825ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)255 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-3976 : (short)20433;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-12252 : (short)7712;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
