#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19363;
unsigned short var_2 = (unsigned short)14434;
unsigned long long int var_3 = 7957748458939494237ULL;
signed char var_4 = (signed char)80;
short var_6 = (short)-7502;
int var_7 = -1192394135;
unsigned short var_8 = (unsigned short)37364;
short var_11 = (short)29964;
int var_14 = 246867835;
int zero = 0;
unsigned long long int var_19 = 14976796909889021188ULL;
short var_20 = (short)11542;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-15;
short var_24 = (short)-12922;
short var_25 = (short)-10970;
unsigned long long int var_26 = 3702315762456105424ULL;
unsigned char var_27 = (unsigned char)74;
long long int var_28 = -3555616328611860787LL;
long long int arr_0 [24] [24] ;
long long int arr_2 [24] [24] [24] ;
unsigned long long int arr_9 [16] [16] ;
signed char arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 5575205331304739412LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1108673029081347646LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 6222495451092053843ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)35;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
