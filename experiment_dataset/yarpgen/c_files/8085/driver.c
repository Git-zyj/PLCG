#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2724266971U;
short var_3 = (short)15100;
_Bool var_4 = (_Bool)1;
long long int var_5 = -571025414239044152LL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)102;
short var_9 = (short)12824;
short var_10 = (short)-21556;
long long int var_11 = 1423296382438946010LL;
unsigned long long int var_12 = 9717029908823163199ULL;
unsigned int var_13 = 1451624159U;
unsigned short var_14 = (unsigned short)52204;
unsigned short var_16 = (unsigned short)46011;
int zero = 0;
unsigned int var_17 = 290579926U;
unsigned long long int var_18 = 18268655735185350349ULL;
unsigned int var_19 = 210196605U;
short var_20 = (short)-1425;
unsigned char var_21 = (unsigned char)65;
unsigned short var_22 = (unsigned short)29382;
unsigned int var_23 = 2345593226U;
unsigned int var_24 = 2681846357U;
unsigned long long int arr_1 [18] ;
short arr_2 [18] [18] ;
unsigned short arr_3 [18] [18] [18] ;
short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 18160637997619631202ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)31035;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)37166;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)25800;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
