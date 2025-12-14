#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3737487550U;
int var_1 = -1039435170;
unsigned char var_2 = (unsigned char)227;
unsigned int var_3 = 3589227060U;
int var_4 = 1045411110;
unsigned int var_5 = 111163869U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-25599;
unsigned short var_10 = (unsigned short)261;
unsigned int var_11 = 956724758U;
unsigned short var_12 = (unsigned short)22186;
unsigned int var_13 = 4157393619U;
unsigned long long int var_14 = 2849335904811443213ULL;
unsigned short var_15 = (unsigned short)8930;
int var_16 = 2140423486;
signed char var_18 = (signed char)-59;
int zero = 0;
short var_19 = (short)-23509;
int var_20 = -950416232;
int var_21 = -137218788;
unsigned short var_22 = (unsigned short)33908;
long long int var_23 = 2777620849930309367LL;
unsigned long long int var_24 = 16842563942794689327ULL;
long long int var_25 = 8694603191920249978LL;
signed char var_26 = (signed char)-81;
_Bool arr_2 [16] ;
long long int arr_3 [16] [16] ;
unsigned char arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned int arr_7 [16] [16] [16] ;
long long int arr_8 [16] [16] [16] [16] [16] ;
short arr_9 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -5809624075906054627LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 17149464131870971743ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2943750050U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = -8837335325536555089LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)25854;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
