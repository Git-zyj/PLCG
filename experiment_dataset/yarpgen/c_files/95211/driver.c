#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4678829765380005384LL;
short var_1 = (short)1100;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)54;
unsigned short var_4 = (unsigned short)40938;
long long int var_5 = -5178260002392472426LL;
int var_7 = 1302568496;
int var_8 = 1525277969;
unsigned char var_9 = (unsigned char)54;
int zero = 0;
unsigned int var_10 = 1947301913U;
int var_11 = -870431271;
unsigned short var_12 = (unsigned short)62624;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7951266038964681625LL;
unsigned short var_15 = (unsigned short)37091;
unsigned short var_16 = (unsigned short)42305;
unsigned long long int var_17 = 15752283043561992918ULL;
unsigned long long int arr_11 [15] [15] [15] [15] [15] ;
unsigned int arr_18 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 17470659401765481570ULL : 12443851093509077192ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1289458436U : 20713975U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
