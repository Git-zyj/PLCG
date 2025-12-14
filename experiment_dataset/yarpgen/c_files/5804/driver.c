#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28572;
signed char var_2 = (signed char)35;
unsigned int var_3 = 1848029107U;
long long int var_4 = 393482091837054410LL;
unsigned int var_6 = 3017463175U;
unsigned short var_7 = (unsigned short)13283;
unsigned long long int var_8 = 12801934300432173655ULL;
unsigned long long int var_9 = 12382449936267815828ULL;
signed char var_10 = (signed char)47;
signed char var_11 = (signed char)-10;
unsigned short var_13 = (unsigned short)13923;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)16085;
unsigned int var_17 = 1834820153U;
unsigned short var_18 = (unsigned short)1551;
short var_19 = (short)-12100;
unsigned short arr_6 [25] [25] [25] ;
unsigned int arr_7 [25] ;
unsigned short arr_8 [25] ;
unsigned short arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)13297 : (unsigned short)61349;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 636836904U : 1878229404U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45704 : (unsigned short)30477;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11409 : (unsigned short)26557;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
