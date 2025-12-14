#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 451642489U;
unsigned short var_3 = (unsigned short)50146;
signed char var_4 = (signed char)36;
long long int var_6 = 6601884578278253278LL;
long long int var_8 = 1153084203102764495LL;
unsigned int var_9 = 2571442595U;
int zero = 0;
signed char var_10 = (signed char)-45;
_Bool var_11 = (_Bool)0;
int var_12 = 4981914;
unsigned short var_13 = (unsigned short)35893;
int var_14 = -439448321;
unsigned long long int var_15 = 17256246375997260714ULL;
unsigned long long int var_16 = 11128407954499175463ULL;
unsigned char var_17 = (unsigned char)67;
short var_18 = (short)-15662;
unsigned int var_19 = 3759677369U;
short var_20 = (short)-20784;
short arr_6 [11] [11] [11] ;
long long int arr_13 [15] [15] [15] ;
unsigned char arr_15 [15] [15] [15] [15] [15] ;
unsigned int arr_23 [18] [18] [18] ;
unsigned int arr_24 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-25399;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 4347981030596268768LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 205545497U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = 2081843469U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
