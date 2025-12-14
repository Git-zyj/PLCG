#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned int var_1 = 3751771036U;
unsigned short var_2 = (unsigned short)62652;
unsigned short var_3 = (unsigned short)34621;
unsigned int var_5 = 1268252706U;
unsigned char var_6 = (unsigned char)58;
unsigned short var_7 = (unsigned short)30189;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)58990;
int zero = 0;
int var_11 = 1824732903;
unsigned char var_12 = (unsigned char)24;
unsigned char var_13 = (unsigned char)84;
signed char var_14 = (signed char)-19;
unsigned char var_15 = (unsigned char)126;
unsigned short arr_2 [25] ;
_Bool arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)20636;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
