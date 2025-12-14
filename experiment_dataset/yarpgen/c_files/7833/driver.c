#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
signed char var_1 = (signed char)-126;
unsigned short var_2 = (unsigned short)45029;
int var_3 = -2086493067;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)8043;
_Bool var_6 = (_Bool)0;
short var_7 = (short)31433;
unsigned int var_8 = 1771315646U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 473191455826881803ULL;
long long int var_11 = -6415921626952532129LL;
unsigned int var_12 = 4093931489U;
signed char var_13 = (signed char)-29;
signed char var_14 = (signed char)-76;
_Bool var_15 = (_Bool)0;
long long int var_16 = -4414279687208311935LL;
unsigned short var_17 = (unsigned short)26538;
signed char var_18 = (signed char)-55;
int var_19 = -962752446;
unsigned short var_20 = (unsigned short)9713;
unsigned short var_21 = (unsigned short)18394;
unsigned int var_22 = 2096235476U;
signed char var_23 = (signed char)-71;
_Bool var_24 = (_Bool)1;
long long int arr_22 [16] [16] [16] [16] ;
_Bool arr_25 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -7713543193881831046LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
