#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15692;
int var_3 = 897765173;
unsigned long long int var_7 = 10585359112176962891ULL;
unsigned char var_8 = (unsigned char)94;
unsigned char var_9 = (unsigned char)94;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)64178;
unsigned char var_14 = (unsigned char)27;
unsigned char var_16 = (unsigned char)145;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 583193303929867499ULL;
unsigned long long int var_19 = 1698061538474834877ULL;
unsigned short var_20 = (unsigned short)62529;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 13521391139743344660ULL;
unsigned char var_23 = (unsigned char)13;
int arr_2 [10] ;
unsigned char arr_3 [24] [24] ;
int arr_6 [24] [24] ;
unsigned char arr_7 [24] ;
signed char arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1364346369;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -1612401044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)16;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
