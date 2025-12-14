#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
unsigned char var_2 = (unsigned char)226;
unsigned int var_4 = 651632438U;
unsigned int var_5 = 941626710U;
unsigned long long int var_8 = 16615501323209246087ULL;
unsigned char var_11 = (unsigned char)254;
unsigned char var_12 = (unsigned char)187;
short var_13 = (short)27775;
unsigned char var_14 = (unsigned char)29;
int zero = 0;
unsigned char var_15 = (unsigned char)196;
int var_16 = 1767152799;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)45;
short var_19 = (short)-30550;
short var_20 = (short)16508;
signed char var_21 = (signed char)96;
int var_22 = 1752817180;
short var_23 = (short)3076;
short var_24 = (short)-11931;
_Bool var_25 = (_Bool)0;
long long int var_26 = 7747143420902727232LL;
unsigned char var_27 = (unsigned char)32;
long long int arr_0 [15] ;
signed char arr_1 [15] ;
long long int arr_5 [12] [12] ;
unsigned char arr_8 [12] [12] ;
unsigned int arr_3 [15] ;
short arr_17 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1703392598944007740LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -2523282909432107759LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)59 : (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1207736979U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)4025 : (short)12049;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
