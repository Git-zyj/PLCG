#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 104679628920851048LL;
unsigned char var_4 = (unsigned char)73;
int var_11 = 721130448;
int var_12 = -1005263642;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 17822636554161904109ULL;
short var_17 = (short)-10681;
int var_18 = -1114646066;
unsigned char var_19 = (unsigned char)227;
long long int var_20 = -3375380094226472034LL;
long long int var_21 = -3191132548094460600LL;
short var_22 = (short)21824;
signed char var_23 = (signed char)15;
unsigned char var_24 = (unsigned char)137;
unsigned int var_25 = 1571705445U;
unsigned short var_26 = (unsigned short)4652;
unsigned char arr_0 [19] ;
short arr_1 [19] ;
unsigned long long int arr_5 [16] ;
_Bool arr_8 [16] ;
short arr_2 [19] ;
unsigned long long int arr_3 [19] ;
long long int arr_6 [16] ;
unsigned long long int arr_7 [16] ;
int arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-2980;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1871243710774286390ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-29847;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 12125352046926656889ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1069258822326441374LL : 7290864591826600618LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 7064927548416056214ULL : 15660461335054901026ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 543333816 : 236302451;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
