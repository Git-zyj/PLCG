#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)220;
int var_5 = -415890619;
unsigned short var_6 = (unsigned short)60983;
unsigned long long int var_12 = 3721014384763192828ULL;
unsigned short var_13 = (unsigned short)43377;
unsigned int var_16 = 506375285U;
unsigned long long int var_17 = 3262663534413618083ULL;
unsigned long long int var_18 = 11302308138196037374ULL;
signed char var_19 = (signed char)53;
int zero = 0;
unsigned long long int var_20 = 7640067188053933080ULL;
unsigned long long int var_21 = 11098626639301611779ULL;
unsigned char var_22 = (unsigned char)132;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)30593;
int var_25 = -775864007;
long long int var_26 = -3074736936199367229LL;
unsigned short arr_1 [12] [12] ;
long long int arr_2 [12] [12] ;
unsigned short arr_4 [12] [12] [12] ;
unsigned short arr_6 [15] ;
unsigned int arr_7 [15] [15] ;
signed char arr_8 [15] ;
unsigned char arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55186;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 8068414816647612762LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)52052;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)51917;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 1183451168U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)233;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
