#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned long long int var_1 = 9997706408762517766ULL;
unsigned char var_2 = (unsigned char)170;
unsigned int var_3 = 548245070U;
unsigned int var_6 = 31146446U;
long long int var_7 = -8998191856441451578LL;
int zero = 0;
unsigned long long int var_12 = 16592784377960954006ULL;
long long int var_13 = -3336181769856919663LL;
unsigned char var_14 = (unsigned char)106;
unsigned int var_15 = 2286119294U;
unsigned char var_16 = (unsigned char)112;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 2396210124994078119ULL;
unsigned long long int var_19 = 1941801957665569497ULL;
unsigned long long int var_20 = 4834210898436428466ULL;
short arr_0 [12] ;
short arr_1 [12] [12] ;
unsigned int arr_2 [10] [10] ;
long long int arr_4 [10] ;
short arr_5 [12] ;
short arr_7 [12] ;
_Bool arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)6255;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-30921 : (short)-4810;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1410114023U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 181152993004193401LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)9352 : (short)-22453;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)24059;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
