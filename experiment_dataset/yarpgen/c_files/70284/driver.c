#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43374;
unsigned char var_1 = (unsigned char)46;
unsigned short var_2 = (unsigned short)50619;
unsigned char var_5 = (unsigned char)154;
long long int var_6 = -2109711328846478767LL;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)47528;
unsigned long long int var_11 = 4507593671666968060ULL;
long long int var_12 = 8034356473962066441LL;
unsigned short var_15 = (unsigned short)50363;
unsigned short var_16 = (unsigned short)4708;
int zero = 0;
unsigned char var_17 = (unsigned char)88;
unsigned char var_18 = (unsigned char)74;
long long int var_19 = -1012660876486829623LL;
unsigned int var_20 = 2660915290U;
unsigned char var_21 = (unsigned char)43;
unsigned short var_22 = (unsigned short)43633;
short var_23 = (short)29437;
short var_24 = (short)25353;
long long int arr_3 [15] ;
short arr_5 [15] [15] [15] ;
unsigned short arr_11 [15] [15] [15] ;
long long int arr_9 [15] ;
signed char arr_10 [15] [15] [15] ;
unsigned long long int arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1687717253439025071LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)20969 : (short)15339;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)30410;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3743251955160755360LL : 3919396205586585909LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-51 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 645952929029406718ULL : 10293682734752065022ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
