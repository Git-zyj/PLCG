#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned short var_1 = (unsigned short)44870;
short var_2 = (short)-32252;
unsigned int var_3 = 2140811468U;
unsigned long long int var_4 = 911483261245372053ULL;
unsigned int var_6 = 2464157056U;
_Bool var_9 = (_Bool)1;
long long int var_11 = -8093727249253470767LL;
long long int var_12 = 4055270085673855090LL;
int zero = 0;
signed char var_14 = (signed char)-77;
unsigned char var_15 = (unsigned char)226;
long long int var_16 = -6498009939926103431LL;
signed char var_17 = (signed char)-106;
signed char var_18 = (signed char)-54;
unsigned char var_19 = (unsigned char)191;
unsigned short var_20 = (unsigned short)22263;
unsigned short arr_0 [20] [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
int arr_4 [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18359;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10345092445504787890ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1557964397;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4361478175131795599ULL : 7351363971591931247ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
