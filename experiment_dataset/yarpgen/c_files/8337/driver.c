#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29493;
short var_4 = (short)-32658;
short var_7 = (short)-24523;
int var_8 = 1769257800;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)106;
short var_12 = (short)-18513;
short var_14 = (short)-27861;
short var_15 = (short)9525;
signed char var_17 = (signed char)-77;
int zero = 0;
long long int var_18 = 1700314559791260907LL;
signed char var_19 = (signed char)46;
unsigned char var_20 = (unsigned char)226;
short var_21 = (short)-21314;
_Bool var_22 = (_Bool)1;
int var_23 = 900914781;
long long int var_24 = -5952161020260005365LL;
unsigned long long int var_25 = 17557791820835007056ULL;
_Bool var_26 = (_Bool)0;
unsigned char arr_0 [14] ;
_Bool arr_4 [14] [14] [14] ;
signed char arr_15 [14] [14] [14] [14] [14] ;
int arr_16 [23] ;
unsigned char arr_17 [23] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 2121108427;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7815251847079782978LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
