#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
int var_1 = 363178234;
unsigned long long int var_2 = 7304496949316969129ULL;
long long int var_3 = 4163833910144031883LL;
short var_4 = (short)-14959;
int var_7 = -599932281;
unsigned short var_9 = (unsigned short)31005;
unsigned int var_10 = 432527404U;
long long int var_11 = 8383580321647605863LL;
unsigned int var_12 = 1790799255U;
short var_13 = (short)-24167;
unsigned int var_14 = 2466354035U;
unsigned int var_17 = 2476601579U;
int zero = 0;
short var_18 = (short)9664;
short var_19 = (short)-29673;
int var_20 = 2044639584;
short var_21 = (short)-6133;
unsigned short var_22 = (unsigned short)5321;
short var_23 = (short)22850;
signed char arr_0 [15] ;
short arr_1 [15] ;
int arr_3 [15] [15] [15] ;
unsigned char arr_4 [15] [15] [15] ;
unsigned short arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-25086 : (short)-7977;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -645831207;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)26908 : (unsigned short)15011;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
