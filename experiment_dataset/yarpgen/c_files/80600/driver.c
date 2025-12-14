#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24556;
unsigned short var_3 = (unsigned short)44381;
int var_4 = 915310455;
unsigned char var_5 = (unsigned char)162;
short var_6 = (short)30885;
int var_7 = 1019586354;
unsigned long long int var_8 = 3600884019934045949ULL;
unsigned short var_11 = (unsigned short)36065;
int zero = 0;
unsigned short var_15 = (unsigned short)2485;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)14952;
signed char var_18 = (signed char)15;
int var_19 = 1398347840;
unsigned char var_20 = (unsigned char)56;
unsigned short var_21 = (unsigned short)20239;
unsigned short var_22 = (unsigned short)11102;
unsigned long long int arr_1 [17] [17] ;
_Bool arr_3 [24] [24] ;
unsigned short arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 3442573245191507859ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)46943;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)5766 : (unsigned short)30890;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
