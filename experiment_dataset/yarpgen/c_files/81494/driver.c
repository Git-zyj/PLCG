#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10205100082790764292ULL;
unsigned char var_2 = (unsigned char)154;
unsigned short var_3 = (unsigned short)24041;
unsigned long long int var_4 = 1798986449787109779ULL;
unsigned short var_6 = (unsigned short)12207;
unsigned short var_7 = (unsigned short)18111;
int var_8 = 700286739;
unsigned long long int var_10 = 7951399144438165354ULL;
unsigned long long int var_12 = 12275430976219239610ULL;
unsigned char var_13 = (unsigned char)89;
signed char var_14 = (signed char)104;
unsigned short var_15 = (unsigned short)46375;
int zero = 0;
short var_17 = (short)-26166;
unsigned short var_18 = (unsigned short)23700;
short var_19 = (short)14682;
short var_20 = (short)-15061;
unsigned short var_21 = (unsigned short)34829;
unsigned char var_22 = (unsigned char)181;
unsigned char arr_1 [20] ;
unsigned long long int arr_4 [20] [20] ;
long long int arr_3 [20] ;
unsigned long long int arr_6 [20] [20] [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 8536721602648401814ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -4808836853476081660LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12221129445799519477ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 7184092220014316797ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
