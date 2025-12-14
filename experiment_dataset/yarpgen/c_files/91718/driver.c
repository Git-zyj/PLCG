#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9272;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)58315;
unsigned char var_3 = (unsigned char)221;
long long int var_4 = 6235095943236733682LL;
signed char var_5 = (signed char)19;
short var_6 = (short)4544;
short var_7 = (short)3331;
int var_8 = 1507238414;
signed char var_10 = (signed char)109;
unsigned char var_11 = (unsigned char)4;
int zero = 0;
unsigned char var_12 = (unsigned char)155;
long long int var_13 = 3679884659635194813LL;
short var_14 = (short)14254;
unsigned int var_15 = 2791855759U;
unsigned char var_16 = (unsigned char)119;
unsigned char var_17 = (unsigned char)7;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)67;
_Bool arr_0 [11] [11] ;
signed char arr_3 [17] ;
signed char arr_4 [17] [17] ;
long long int arr_5 [17] ;
int arr_6 [17] ;
int arr_9 [17] ;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 8327633662803181892LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -1865926064;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -2113791978;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 74829013U : 2838633472U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
