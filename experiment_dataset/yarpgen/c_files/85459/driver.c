#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26184;
long long int var_2 = -1799783914626825877LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)25753;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-818;
signed char var_17 = (signed char)63;
int zero = 0;
signed char var_20 = (signed char)-9;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 16054709079947864228ULL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-25418;
short var_25 = (short)24462;
signed char var_26 = (signed char)50;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 11622377079443134709ULL;
unsigned int var_30 = 4289685939U;
_Bool arr_0 [21] ;
short arr_1 [21] ;
unsigned short arr_2 [21] ;
long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-29366;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)54689;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2214820442018930526LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
