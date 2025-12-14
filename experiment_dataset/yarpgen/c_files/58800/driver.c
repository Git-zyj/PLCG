#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 72504271;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 16051071501266815533ULL;
int var_4 = 1671698132;
unsigned short var_5 = (unsigned short)43595;
int var_8 = -159083806;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)9266;
short var_13 = (short)4114;
int zero = 0;
int var_14 = 74796755;
signed char var_15 = (signed char)-97;
unsigned char var_16 = (unsigned char)67;
int var_17 = 1404640944;
unsigned short var_18 = (unsigned short)20614;
signed char var_19 = (signed char)-36;
long long int var_20 = -4350638257107187881LL;
unsigned long long int var_21 = 10760216045487041086ULL;
unsigned long long int arr_15 [15] [15] [15] [15] ;
signed char arr_4 [13] ;
unsigned int arr_19 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 8041003577619716516ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = 3421339657U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
