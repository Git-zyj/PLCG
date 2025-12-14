#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11529270344768992663ULL;
unsigned long long int var_3 = 9578504170816884270ULL;
unsigned long long int var_4 = 5469958917409219790ULL;
long long int var_5 = -5540729907962936515LL;
signed char var_6 = (signed char)91;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)197;
int zero = 0;
int var_15 = 713191988;
int var_16 = 835791235;
unsigned int var_17 = 3828798998U;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)46;
short var_20 = (short)-14912;
unsigned long long int arr_1 [18] ;
unsigned char arr_3 [11] ;
unsigned long long int arr_4 [11] [11] ;
_Bool arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 6931627724499788801ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 15753984080306249360ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
