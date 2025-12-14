#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned char var_1 = (unsigned char)167;
unsigned int var_2 = 2153037896U;
unsigned char var_3 = (unsigned char)168;
unsigned int var_4 = 2225899102U;
short var_6 = (short)6675;
unsigned short var_7 = (unsigned short)4394;
unsigned long long int var_10 = 16127173580776059091ULL;
long long int var_11 = 7286727763566751187LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)58538;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)127;
short var_17 = (short)-15115;
unsigned int var_18 = 2577488930U;
signed char var_19 = (signed char)41;
unsigned long long int var_20 = 15904579041129041985ULL;
unsigned long long int var_21 = 10564854060449174654ULL;
signed char var_22 = (signed char)6;
long long int var_23 = -1945163476210278640LL;
long long int var_24 = -4566374955257104936LL;
short var_25 = (short)2647;
_Bool var_26 = (_Bool)1;
unsigned int arr_0 [20] [20] ;
signed char arr_4 [20] [20] [20] ;
_Bool arr_8 [20] [20] [20] [20] ;
unsigned short arr_10 [20] ;
_Bool arr_13 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1302430743U : 1763660128U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)53607;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
}

void checksum() {
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
