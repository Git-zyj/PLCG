#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26969;
signed char var_1 = (signed char)-46;
short var_2 = (short)-6177;
unsigned short var_3 = (unsigned short)51746;
unsigned long long int var_5 = 12913983573409900495ULL;
unsigned short var_6 = (unsigned short)8602;
short var_7 = (short)-13521;
unsigned short var_8 = (unsigned short)1428;
unsigned char var_9 = (unsigned char)150;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3615493189U;
unsigned char var_14 = (unsigned char)105;
signed char var_15 = (signed char)-43;
long long int var_16 = -8869792606812974249LL;
short var_17 = (short)-19003;
unsigned long long int var_18 = 10004663079624359295ULL;
long long int var_19 = -3541865559206284753LL;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned long long int arr_2 [19] ;
int arr_4 [21] ;
unsigned int arr_5 [21] ;
signed char arr_12 [21] [21] [21] [21] ;
long long int arr_15 [21] [21] [21] ;
unsigned long long int arr_3 [19] ;
unsigned int arr_13 [21] [21] ;
signed char arr_18 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 17254562846117907092ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)18758;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 12187300268145913460ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 758155000;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 3796659798U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 4142433728469847311LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 5141918792889970723ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1451644619U : 3094457100U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)-111;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
