#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -649981190;
int var_1 = 240089574;
unsigned long long int var_2 = 17569804660125471838ULL;
unsigned int var_3 = 1633910649U;
unsigned long long int var_5 = 8450795258136803788ULL;
short var_6 = (short)22482;
long long int var_7 = 5438621300648815353LL;
short var_13 = (short)-23818;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2749330375U;
int zero = 0;
unsigned long long int var_19 = 15729454526218745933ULL;
unsigned long long int var_20 = 2236258669307224714ULL;
short var_21 = (short)31653;
unsigned int var_22 = 4261998381U;
unsigned short var_23 = (unsigned short)25232;
signed char var_24 = (signed char)62;
unsigned int arr_1 [24] ;
unsigned char arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3342233513U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)42 : (unsigned char)112;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
