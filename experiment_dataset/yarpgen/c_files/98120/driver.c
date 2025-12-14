#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
short var_3 = (short)805;
unsigned short var_4 = (unsigned short)22246;
unsigned short var_5 = (unsigned short)33195;
_Bool var_6 = (_Bool)0;
long long int var_11 = 7965758984246058206LL;
int zero = 0;
unsigned long long int var_12 = 1143434214353189878ULL;
signed char var_13 = (signed char)107;
int var_14 = -1650701720;
long long int var_15 = 8069038616904993847LL;
short var_16 = (short)16002;
signed char var_17 = (signed char)-84;
unsigned short var_18 = (unsigned short)33401;
unsigned long long int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned short arr_2 [25] ;
unsigned long long int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 13365468633579366837ULL : 16470363033274123389ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1123417318U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)13883;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 205996975980883296ULL;
}

void checksum() {
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
