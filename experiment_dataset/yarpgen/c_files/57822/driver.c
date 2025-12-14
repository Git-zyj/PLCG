#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1090258260U;
unsigned char var_4 = (unsigned char)253;
short var_5 = (short)-17024;
signed char var_6 = (signed char)21;
unsigned int var_7 = 2229968809U;
unsigned short var_9 = (unsigned short)20180;
int zero = 0;
unsigned int var_10 = 3879681484U;
unsigned int var_11 = 3639812048U;
long long int var_12 = -1421390459371400692LL;
unsigned char var_13 = (unsigned char)217;
short var_14 = (short)-31349;
signed char var_15 = (signed char)-17;
_Bool var_16 = (_Bool)1;
short var_17 = (short)22726;
int var_18 = 1649438727;
unsigned short var_19 = (unsigned short)306;
long long int var_20 = 6930446357154753785LL;
unsigned char var_21 = (unsigned char)16;
unsigned int var_22 = 1188930458U;
unsigned int var_23 = 149305137U;
signed char arr_3 [14] [14] [14] ;
int arr_7 [14] [14] ;
unsigned short arr_9 [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] ;
long long int arr_12 [14] [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] [14] [14] [14] ;
short arr_24 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1124909523 : -1841617877;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27516 : (unsigned short)15531;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10237358595636961369ULL : 6854995406250311105ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1153968912835654992LL : -2332989962570722871LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1448212822U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (short)-19877;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
