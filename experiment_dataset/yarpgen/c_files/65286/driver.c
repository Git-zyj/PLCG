#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1976257133;
short var_1 = (short)-16856;
long long int var_2 = -7720036410005332677LL;
unsigned int var_3 = 3208835244U;
short var_4 = (short)-17773;
signed char var_7 = (signed char)81;
short var_8 = (short)3594;
long long int var_10 = 7373682145165075941LL;
signed char var_12 = (signed char)124;
unsigned long long int var_13 = 18103387800182476527ULL;
long long int var_14 = -6989523925306922711LL;
int zero = 0;
unsigned long long int var_15 = 4314026009319250679ULL;
long long int var_16 = 5580136920072399202LL;
unsigned long long int var_17 = 14131811239656820961ULL;
signed char var_18 = (signed char)77;
signed char var_19 = (signed char)108;
signed char var_20 = (signed char)-70;
short var_21 = (short)-14973;
signed char var_22 = (signed char)-42;
unsigned int var_23 = 3084338189U;
long long int arr_2 [23] ;
unsigned int arr_3 [23] [23] [23] ;
long long int arr_4 [23] [23] ;
unsigned char arr_6 [23] [23] [23] [23] ;
int arr_7 [23] [23] [23] ;
unsigned int arr_8 [23] ;
unsigned char arr_9 [23] [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -23345000746878790LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2795399559U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -5320661198909035072LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1713664622 : 586369380;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1452016121U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)16401;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
