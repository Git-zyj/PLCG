#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 704842911U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-112;
int var_4 = 32764327;
long long int var_7 = -1474790272638348786LL;
unsigned int var_8 = 954583733U;
unsigned short var_9 = (unsigned short)49355;
unsigned short var_11 = (unsigned short)17222;
int zero = 0;
short var_14 = (short)5765;
unsigned char var_15 = (unsigned char)23;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-118;
unsigned char var_18 = (unsigned char)43;
short var_19 = (short)20798;
short var_20 = (short)-10026;
signed char var_21 = (signed char)119;
signed char var_22 = (signed char)-95;
unsigned long long int var_23 = 4788234088378677656ULL;
int arr_11 [24] [24] ;
short arr_13 [24] ;
short arr_15 [24] ;
short arr_17 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = -983454989;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (short)-5489;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)4791 : (short)2592;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)4071 : (short)-8576;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
