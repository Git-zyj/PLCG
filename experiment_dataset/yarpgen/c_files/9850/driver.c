#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14746;
int var_6 = -1877839157;
signed char var_7 = (signed char)-105;
short var_9 = (short)-3391;
unsigned long long int var_10 = 15194191025747321357ULL;
long long int var_11 = -8007320065361459845LL;
unsigned long long int var_13 = 15054472329611435064ULL;
unsigned int var_14 = 72148336U;
int zero = 0;
signed char var_16 = (signed char)-9;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3680310923U;
unsigned char var_19 = (unsigned char)115;
short var_20 = (short)-20821;
unsigned short var_21 = (unsigned short)39289;
unsigned char var_22 = (unsigned char)252;
unsigned char var_23 = (unsigned char)237;
unsigned short var_24 = (unsigned short)29842;
unsigned char var_25 = (unsigned char)74;
unsigned long long int var_26 = 8595565570138484108ULL;
int var_27 = 1860969450;
unsigned long long int var_28 = 8944223695163755333ULL;
short var_29 = (short)-9979;
long long int var_30 = 8943513536120548917LL;
unsigned int var_31 = 3759794529U;
short arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
unsigned char arr_14 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_18 [23] [23] ;
unsigned short arr_25 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-1425;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3058078660U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)47363;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)54050;
}

void checksum() {
    hash(&seed, var_16);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
