#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7532130400296429125LL;
unsigned int var_1 = 3172577586U;
unsigned short var_3 = (unsigned short)1288;
int var_5 = -955597479;
unsigned int var_6 = 838268182U;
int var_7 = -732881793;
unsigned short var_8 = (unsigned short)7543;
unsigned short var_10 = (unsigned short)16446;
short var_11 = (short)23075;
int var_12 = 801733888;
long long int var_13 = -1214807312585923886LL;
int zero = 0;
unsigned char var_16 = (unsigned char)18;
unsigned short var_17 = (unsigned short)6876;
unsigned short var_18 = (unsigned short)29152;
long long int var_19 = 2678340350317890042LL;
int var_20 = 893123112;
short var_21 = (short)7096;
_Bool var_22 = (_Bool)1;
int var_23 = 1047287141;
signed char arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
short arr_4 [24] [24] ;
int arr_5 [24] ;
unsigned long long int arr_6 [24] ;
unsigned int arr_7 [24] [24] ;
unsigned char arr_13 [15] [15] ;
unsigned short arr_9 [24] ;
long long int arr_10 [24] ;
short arr_15 [15] [15] ;
int arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 492517687U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)26207;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -552969263;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 11843549842950527381ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 2797440419U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)36101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -8904022262136107845LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-27411;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 1132870259;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
