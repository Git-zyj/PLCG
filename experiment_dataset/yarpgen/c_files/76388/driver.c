#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3183064871U;
unsigned int var_1 = 3339503967U;
int var_2 = 410508575;
unsigned char var_3 = (unsigned char)244;
unsigned long long int var_4 = 13556058225086738181ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)26631;
short var_8 = (short)-17856;
signed char var_9 = (signed char)-100;
unsigned int var_10 = 1275939085U;
int zero = 0;
unsigned short var_11 = (unsigned short)16801;
short var_12 = (short)32241;
unsigned long long int var_13 = 18232818875712226693ULL;
unsigned long long int var_14 = 11838518778846221911ULL;
signed char arr_3 [18] ;
short arr_7 [18] [18] [18] ;
unsigned char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-16617;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
