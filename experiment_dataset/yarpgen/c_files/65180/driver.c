#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-38;
unsigned int var_4 = 2558299967U;
unsigned int var_5 = 439592570U;
unsigned short var_7 = (unsigned short)41067;
int var_8 = -2073762467;
unsigned long long int var_9 = 18310805495177595552ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -414783639862477726LL;
unsigned short var_12 = (unsigned short)8773;
short var_13 = (short)-26052;
unsigned int var_14 = 2793865923U;
unsigned int var_15 = 3350827804U;
unsigned char var_16 = (unsigned char)115;
short var_17 = (short)27186;
unsigned char var_18 = (unsigned char)135;
long long int var_19 = -3465047946833619864LL;
unsigned short arr_3 [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned long long int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)55346;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 76329767U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 10379658220846118576ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
