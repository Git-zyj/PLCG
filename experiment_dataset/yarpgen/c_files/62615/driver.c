#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)177;
int var_2 = -1805195047;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6175531874687283482ULL;
long long int var_8 = -8538121365458154158LL;
unsigned short var_9 = (unsigned short)64630;
unsigned char var_10 = (unsigned char)36;
_Bool var_11 = (_Bool)0;
short var_12 = (short)31023;
short var_14 = (short)-30339;
unsigned long long int var_15 = 9308525616925648684ULL;
signed char var_18 = (signed char)35;
int zero = 0;
unsigned short var_19 = (unsigned short)26773;
long long int var_20 = -1580666467990659969LL;
long long int var_21 = -5120173574592767327LL;
unsigned char var_22 = (unsigned char)0;
short var_23 = (short)14812;
long long int var_24 = 419999493123972757LL;
unsigned int arr_1 [12] ;
short arr_2 [12] [12] ;
_Bool arr_4 [12] [12] ;
int arr_5 [12] ;
unsigned long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 45654150U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)859;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -1200408224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 8669684625651697576ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
