#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8576;
unsigned long long int var_2 = 7922147506784261139ULL;
unsigned short var_4 = (unsigned short)59607;
unsigned int var_5 = 1844625992U;
int var_7 = -1352005084;
short var_10 = (short)-23357;
signed char var_11 = (signed char)15;
short var_12 = (short)20701;
int var_13 = -699902350;
int zero = 0;
unsigned long long int var_14 = 12029937736516971272ULL;
unsigned long long int var_15 = 2458772484753380647ULL;
short var_16 = (short)29111;
unsigned char var_17 = (unsigned char)101;
signed char arr_9 [17] ;
unsigned char arr_7 [21] [21] [21] ;
short arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-17591 : (short)8849;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
