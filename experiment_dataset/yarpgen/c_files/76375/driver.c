#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5144705620781480741LL;
short var_2 = (short)13829;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 16140918324129195095ULL;
int var_6 = -2013265387;
unsigned short var_7 = (unsigned short)50868;
unsigned long long int var_8 = 15958719930993456309ULL;
int zero = 0;
int var_10 = -1715668186;
signed char var_11 = (signed char)119;
unsigned char var_12 = (unsigned char)176;
int var_13 = -983276776;
long long int var_14 = -8854956414527760075LL;
signed char var_15 = (signed char)115;
long long int var_16 = -8411923711369743924LL;
int var_17 = -1878524724;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 7422401634203640357ULL;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_5 [19] [19] ;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 16986458438601807498ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 14471861564818168197ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -7047246682017719780LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
