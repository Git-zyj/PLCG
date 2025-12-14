#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3482805193U;
short var_1 = (short)27221;
signed char var_2 = (signed char)17;
signed char var_3 = (signed char)111;
long long int var_4 = -2295620987167209946LL;
int var_6 = -1836563333;
short var_8 = (short)-28359;
short var_9 = (short)-28641;
short var_10 = (short)-3248;
int zero = 0;
unsigned short var_11 = (unsigned short)21118;
unsigned int var_12 = 3133219236U;
short var_13 = (short)-8429;
long long int var_14 = -281306794732331537LL;
short var_15 = (short)-23732;
int var_16 = -66390277;
unsigned int var_17 = 3910408351U;
unsigned int var_18 = 2904162748U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1317203999U;
short var_21 = (short)-22846;
int var_22 = -1551434403;
unsigned int var_23 = 1175014803U;
unsigned int var_24 = 2594682296U;
unsigned int arr_2 [22] ;
unsigned int arr_6 [22] [22] [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
short arr_8 [22] ;
unsigned int arr_11 [22] [22] [22] [22] ;
unsigned int arr_12 [22] [22] ;
signed char arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 4002665002U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3629832855U : 596749967U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6752425807117506589ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-6597 : (short)15440;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3107725268U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 3252145521U : 1265063189U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (signed char)105;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
