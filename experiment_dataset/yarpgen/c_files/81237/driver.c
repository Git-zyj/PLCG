#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43886;
unsigned int var_4 = 1631672335U;
unsigned char var_5 = (unsigned char)121;
unsigned char var_6 = (unsigned char)128;
long long int var_8 = 3973353461998636490LL;
unsigned long long int var_9 = 18352193808061038275ULL;
unsigned long long int var_12 = 8983681064492663603ULL;
unsigned short var_13 = (unsigned short)41865;
unsigned char var_15 = (unsigned char)188;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1843960526U;
unsigned short var_19 = (unsigned short)64496;
signed char arr_0 [21] [21] ;
signed char arr_4 [21] [21] ;
unsigned char arr_5 [21] ;
unsigned char arr_6 [21] [21] [21] ;
unsigned int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3294081706U : 2642657245U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
