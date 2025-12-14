#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16752811515745430284ULL;
unsigned long long int var_2 = 16190050348849903128ULL;
unsigned long long int var_6 = 11596182494858778748ULL;
unsigned long long int var_8 = 6873116520835333574ULL;
unsigned short var_10 = (unsigned short)44746;
unsigned long long int var_12 = 2027908156433958439ULL;
unsigned long long int var_14 = 17853015786391514274ULL;
unsigned long long int var_15 = 12301559134087579363ULL;
unsigned short var_16 = (unsigned short)25789;
int zero = 0;
short var_17 = (short)-8783;
unsigned long long int var_18 = 13525832631554243421ULL;
short var_19 = (short)-27449;
long long int var_20 = 2757282028630975101LL;
unsigned long long int arr_0 [10] ;
short arr_3 [10] [10] ;
unsigned long long int arr_4 [10] [10] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 14019204110038060324ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)5972;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 7597090538914642622ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1171530070 : -415465232;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
