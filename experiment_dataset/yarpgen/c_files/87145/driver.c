#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 98350738177277104LL;
unsigned short var_1 = (unsigned short)15107;
_Bool var_3 = (_Bool)1;
long long int var_7 = -2415469107234972949LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-20692;
unsigned short var_12 = (unsigned short)60370;
long long int var_13 = -8863258961818118678LL;
signed char var_14 = (signed char)79;
int var_15 = 701353864;
int var_16 = 672112281;
int var_17 = 411811990;
unsigned int var_18 = 692065053U;
_Bool var_19 = (_Bool)1;
int var_20 = -1243823516;
unsigned int var_21 = 3150021216U;
long long int var_22 = -7829981680605210673LL;
int var_23 = 2036360899;
long long int arr_0 [14] ;
long long int arr_1 [14] ;
unsigned short arr_2 [14] ;
_Bool arr_3 [14] ;
_Bool arr_9 [10] ;
long long int arr_12 [10] [10] [10] ;
unsigned long long int arr_13 [10] ;
_Bool arr_14 [10] [10] ;
_Bool arr_17 [10] [10] [10] ;
short arr_21 [10] [10] [10] ;
unsigned short arr_22 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8130415953353092859LL : 6924937060967875305LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5103547722080922049LL : -8684069850851239530LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35308 : (unsigned short)46121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 6967551716537929846LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 6571733114124481081ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)10259;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (unsigned short)46001;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
