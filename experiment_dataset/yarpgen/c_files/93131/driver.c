#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3754548323067417514LL;
unsigned short var_1 = (unsigned short)3018;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6502739101132735513LL;
short var_9 = (short)10075;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 14521869920599283674ULL;
unsigned long long int var_14 = 15470149402948703360ULL;
unsigned char var_15 = (unsigned char)22;
unsigned long long int var_16 = 14298839367195165428ULL;
signed char var_17 = (signed char)-26;
unsigned char var_18 = (unsigned char)152;
unsigned short var_19 = (unsigned short)44573;
unsigned int var_20 = 3051592685U;
short var_21 = (short)21461;
short arr_1 [18] ;
unsigned long long int arr_2 [18] [18] ;
long long int arr_13 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-29421;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 5910689305213926087ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1180354398075444549LL;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
