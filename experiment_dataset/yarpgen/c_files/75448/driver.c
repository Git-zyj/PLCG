#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5920736789289040629LL;
signed char var_2 = (signed char)-96;
unsigned short var_4 = (unsigned short)646;
unsigned char var_5 = (unsigned char)114;
unsigned char var_6 = (unsigned char)158;
unsigned char var_8 = (unsigned char)237;
unsigned char var_11 = (unsigned char)129;
unsigned char var_13 = (unsigned char)148;
int zero = 0;
unsigned short var_15 = (unsigned short)1188;
int var_16 = 1043640152;
signed char var_17 = (signed char)-58;
long long int var_18 = -4605308551455723016LL;
unsigned int var_19 = 4287394622U;
long long int var_20 = -500265187911234833LL;
unsigned char arr_1 [20] ;
_Bool arr_2 [20] ;
unsigned int arr_5 [20] ;
signed char arr_8 [13] [13] ;
short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3048033671U : 221389015U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (short)18694;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
