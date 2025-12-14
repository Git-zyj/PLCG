#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1965495183;
int var_2 = -419640226;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)173;
unsigned char var_5 = (unsigned char)29;
int var_6 = 863337475;
unsigned long long int var_7 = 14504191890645630538ULL;
short var_8 = (short)-6434;
unsigned short var_9 = (unsigned short)62466;
int zero = 0;
unsigned int var_10 = 2992838101U;
int var_11 = -1417185147;
int var_12 = 1558314651;
int var_13 = -788973270;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4489444690333897349LL;
unsigned long long int var_16 = 796721528036562495ULL;
int arr_14 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 346249469 : -1382210280;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
