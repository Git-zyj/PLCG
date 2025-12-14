#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14038;
signed char var_1 = (signed char)76;
unsigned int var_2 = 361174344U;
unsigned char var_6 = (unsigned char)60;
short var_7 = (short)15798;
int var_12 = 1647017213;
short var_13 = (short)-22744;
long long int var_14 = 6269918605120280989LL;
int var_15 = 601660463;
int zero = 0;
unsigned char var_17 = (unsigned char)83;
unsigned int var_18 = 2076041454U;
unsigned int var_19 = 1566954246U;
unsigned char var_20 = (unsigned char)0;
unsigned long long int var_21 = 17431647064770053796ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-31;
short var_24 = (short)-20004;
short var_25 = (short)31007;
unsigned short var_26 = (unsigned short)38176;
unsigned short var_27 = (unsigned short)23544;
short arr_1 [24] ;
unsigned long long int arr_2 [24] [24] ;
short arr_3 [24] ;
unsigned char arr_5 [24] ;
int arr_6 [24] ;
long long int arr_7 [24] [24] [24] [24] [24] ;
long long int arr_8 [24] ;
int arr_9 [24] [24] [24] [24] ;
short arr_13 [12] [12] [12] ;
signed char arr_15 [12] [12] [12] [12] ;
unsigned int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)8916;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 15009903447130818485ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-4476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1852332718;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 996373262838186238LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 7934128394735388757LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1665116712;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)2303;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1103103330U : 484285698U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
