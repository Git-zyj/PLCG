#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3024295271U;
long long int var_4 = 3583110078087963861LL;
unsigned int var_6 = 1575042707U;
unsigned long long int var_7 = 2164675918077938277ULL;
unsigned int var_9 = 1802722700U;
int zero = 0;
unsigned char var_11 = (unsigned char)14;
unsigned char var_12 = (unsigned char)93;
unsigned short var_13 = (unsigned short)54719;
unsigned char var_14 = (unsigned char)82;
int var_15 = -1150788542;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 13626449533161256757ULL;
unsigned char var_18 = (unsigned char)211;
long long int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 9121831220479670314LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 11740480553839488679ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
