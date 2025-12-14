#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)31968;
unsigned long long int var_5 = 11788874033695166417ULL;
unsigned long long int var_6 = 12390307644704237647ULL;
unsigned short var_7 = (unsigned short)31671;
unsigned short var_10 = (unsigned short)62493;
long long int var_14 = 2182832047501754322LL;
int zero = 0;
unsigned long long int var_15 = 10252956667429275840ULL;
unsigned int var_16 = 3244710553U;
unsigned short var_17 = (unsigned short)17995;
signed char var_18 = (signed char)-32;
_Bool var_19 = (_Bool)0;
int var_20 = -43890276;
unsigned int var_21 = 1476921269U;
unsigned short var_22 = (unsigned short)48556;
int arr_0 [25] ;
long long int arr_2 [25] ;
unsigned short arr_5 [12] [12] ;
unsigned short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1205848248;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -3899397842510616365LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)35582 : (unsigned short)63680;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)59787;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
