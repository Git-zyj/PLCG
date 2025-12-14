#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4104221644U;
unsigned short var_1 = (unsigned short)60830;
unsigned int var_2 = 3885099589U;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)29339;
signed char var_7 = (signed char)32;
int var_8 = -1150767091;
unsigned char var_9 = (unsigned char)7;
int zero = 0;
signed char var_11 = (signed char)2;
unsigned int var_12 = 12690116U;
unsigned short var_13 = (unsigned short)34136;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5501675640357968605LL;
unsigned char var_16 = (unsigned char)229;
unsigned short var_17 = (unsigned short)34020;
unsigned int var_18 = 1250289403U;
signed char var_19 = (signed char)-53;
unsigned short var_20 = (unsigned short)46181;
short arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
_Bool arr_2 [21] [21] ;
short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-24135;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)26106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-14089;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
