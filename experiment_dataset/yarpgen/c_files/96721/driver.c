#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1972746659;
int var_1 = -161162185;
unsigned long long int var_6 = 17854313181872049740ULL;
unsigned int var_8 = 1739276099U;
signed char var_9 = (signed char)107;
signed char var_10 = (signed char)111;
int zero = 0;
unsigned long long int var_11 = 4240538375747760058ULL;
unsigned int var_12 = 3640835101U;
long long int var_13 = 6304531713994579163LL;
long long int var_14 = -6743890947690541636LL;
long long int var_15 = 9202848454775102382LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3330353646378342107ULL;
short var_18 = (short)20661;
signed char var_19 = (signed char)45;
signed char var_20 = (signed char)77;
unsigned long long int arr_1 [20] ;
signed char arr_3 [20] ;
unsigned int arr_6 [20] ;
_Bool arr_9 [25] ;
unsigned long long int arr_10 [25] ;
signed char arr_11 [22] [22] ;
unsigned char arr_13 [22] [22] ;
unsigned long long int arr_8 [20] [20] ;
signed char arr_20 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 17608071890314383008ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 507492816U : 2517529269U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 4600078858128210059ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 17908526231455651211ULL : 12756258367557885169ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-105 : (signed char)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
