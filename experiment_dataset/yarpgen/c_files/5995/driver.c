#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-1;
int var_7 = 1948649846;
unsigned char var_12 = (unsigned char)22;
int var_13 = 1214272197;
int zero = 0;
int var_15 = 1023125899;
unsigned int var_16 = 2771961483U;
int var_17 = -408069846;
int var_18 = 16489439;
int arr_0 [21] [21] ;
long long int arr_1 [21] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_15 [13] [13] ;
signed char arr_2 [21] ;
long long int arr_3 [21] ;
unsigned short arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1503217886;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 86120955353371072LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 8278681990089662966ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 5425717415789468612ULL : 5156522152671196079ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -8619493571592677813LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12893 : (unsigned short)3105;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
