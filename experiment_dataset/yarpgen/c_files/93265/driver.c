#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7211;
long long int var_4 = 4812742323234361011LL;
unsigned short var_6 = (unsigned short)19865;
signed char var_9 = (signed char)-37;
signed char var_12 = (signed char)-57;
unsigned char var_13 = (unsigned char)69;
unsigned long long int var_16 = 15217995792318524863ULL;
short var_18 = (short)649;
int zero = 0;
unsigned short var_20 = (unsigned short)18074;
unsigned char var_21 = (unsigned char)166;
unsigned char var_22 = (unsigned char)141;
short var_23 = (short)2421;
unsigned int var_24 = 3508714770U;
unsigned short var_25 = (unsigned short)43042;
unsigned char var_26 = (unsigned char)54;
short arr_0 [23] [23] ;
unsigned int arr_2 [23] [23] ;
signed char arr_5 [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)9962;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3312176240U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-115 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1156741075;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
