#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12121;
long long int var_2 = -8122245214363017828LL;
long long int var_4 = -8701663989310116599LL;
long long int var_7 = 1510674894483536843LL;
unsigned short var_8 = (unsigned short)3474;
unsigned int var_10 = 3419949517U;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-50;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = -5510770755977597436LL;
int var_18 = 1474539709;
short var_19 = (short)-30496;
unsigned long long int var_20 = 11963761570869953524ULL;
short var_21 = (short)-20621;
long long int var_22 = -5053846545586729714LL;
signed char var_23 = (signed char)122;
unsigned int var_24 = 2119547269U;
int var_25 = 2045448109;
unsigned int var_26 = 1366203985U;
unsigned short var_27 = (unsigned short)42338;
unsigned char arr_1 [22] ;
short arr_7 [17] ;
unsigned long long int arr_8 [17] [17] ;
unsigned char arr_15 [17] [17] ;
unsigned short arr_6 [16] ;
long long int arr_10 [17] [17] ;
unsigned short arr_18 [17] ;
unsigned char arr_19 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)-19133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 6099040070948877017ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)160 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)14484;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 8773867830546414786LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63161 : (unsigned short)31069;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)184 : (unsigned char)151;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
