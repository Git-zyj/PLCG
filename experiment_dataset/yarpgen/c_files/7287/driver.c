#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3398883471U;
long long int var_1 = 6668569236573092119LL;
unsigned char var_4 = (unsigned char)192;
unsigned char var_5 = (unsigned char)2;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 531206570U;
unsigned int var_8 = 1884455711U;
short var_9 = (short)11830;
unsigned int var_10 = 2736382983U;
unsigned short var_11 = (unsigned short)410;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1808428131U;
unsigned int var_14 = 4219059187U;
unsigned int var_15 = 1510936259U;
int zero = 0;
signed char var_16 = (signed char)-20;
short var_17 = (short)-20804;
signed char var_18 = (signed char)-64;
unsigned char var_19 = (unsigned char)39;
unsigned int var_20 = 2120186113U;
unsigned long long int var_21 = 13955913966988344218ULL;
long long int var_22 = -2230947126274314776LL;
unsigned int var_23 = 2366139124U;
int var_24 = -1760840553;
unsigned int var_25 = 1751225744U;
int var_26 = 1521188670;
unsigned int arr_0 [14] ;
short arr_1 [14] [14] ;
int arr_2 [14] ;
signed char arr_4 [14] [14] [14] ;
long long int arr_5 [14] [14] [14] [14] ;
int arr_6 [14] [14] [14] ;
unsigned char arr_8 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_12 [21] ;
long long int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2428328192U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-26793;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 980309360 : 39325077;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 342756217251049898LL : 6864587026582409195LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1763854584;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 8530556910234663550ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 8144301530470759491LL;
}

void checksum() {
    hash(&seed, var_16);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
