#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28543;
unsigned int var_2 = 616208741U;
unsigned short var_3 = (unsigned short)61641;
unsigned int var_5 = 3301564041U;
unsigned char var_6 = (unsigned char)46;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2542447582U;
unsigned short var_10 = (unsigned short)35679;
unsigned long long int var_11 = 10148166267024018923ULL;
unsigned int var_13 = 2511299733U;
long long int var_14 = -3552109116470387025LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
unsigned short var_17 = (unsigned short)63798;
long long int var_18 = -4289702806006918612LL;
unsigned int var_19 = 3685222473U;
unsigned long long int var_20 = 14489243771584428616ULL;
unsigned char var_21 = (unsigned char)9;
unsigned int arr_0 [21] ;
unsigned char arr_2 [21] ;
long long int arr_3 [21] [21] [21] ;
unsigned int arr_4 [21] ;
unsigned int arr_6 [21] [21] ;
short arr_7 [21] ;
long long int arr_8 [21] ;
short arr_10 [21] [21] [21] [21] ;
unsigned char arr_12 [21] [21] [21] [21] [21] ;
short arr_9 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1450663887U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8196918221135104413LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2663071840U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 420717336U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)23883;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -169112159298341084LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-32464;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)22520;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
