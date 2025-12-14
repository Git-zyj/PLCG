#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
long long int var_1 = 8531261740834896206LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1260430267366855393LL;
short var_10 = (short)-18562;
int zero = 0;
unsigned int var_13 = 2312262911U;
unsigned char var_14 = (unsigned char)33;
unsigned char var_15 = (unsigned char)187;
unsigned long long int var_16 = 5302010825172843202ULL;
short var_17 = (short)-20388;
long long int var_18 = 8999658605579134690LL;
int var_19 = 1437798122;
short arr_0 [17] ;
long long int arr_1 [17] ;
unsigned int arr_6 [17] [17] [17] ;
long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)21129 : (short)-19193;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 9003772112901747110LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 317540275U : 2836208008U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 5146097697112684789LL : -5482631504812875841LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
