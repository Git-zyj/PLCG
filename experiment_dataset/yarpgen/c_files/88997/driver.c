#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3880282262U;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)51;
long long int var_6 = -6508278001061941843LL;
unsigned int var_8 = 1900546327U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1523847205U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4750488875817121584ULL;
int var_17 = 1389124096;
unsigned int var_18 = 2707554269U;
short var_19 = (short)-32302;
unsigned long long int var_20 = 2090249248738894963ULL;
unsigned int var_21 = 2945797794U;
unsigned char var_22 = (unsigned char)35;
long long int var_23 = -5558078708931256412LL;
signed char arr_0 [12] ;
short arr_1 [12] ;
unsigned char arr_6 [12] [12] ;
_Bool arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)32515;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
