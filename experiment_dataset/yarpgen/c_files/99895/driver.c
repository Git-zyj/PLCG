#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13997;
unsigned short var_1 = (unsigned short)56069;
unsigned int var_4 = 3225480161U;
unsigned short var_5 = (unsigned short)20051;
unsigned char var_6 = (unsigned char)7;
unsigned char var_11 = (unsigned char)59;
long long int var_12 = 1223194953033219307LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)112;
int zero = 0;
short var_16 = (short)20570;
unsigned int var_17 = 3432784795U;
unsigned long long int var_18 = 1085332930352140758ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)61700;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)46600;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)103;
int var_26 = 240861817;
signed char arr_4 [25] ;
_Bool arr_15 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
