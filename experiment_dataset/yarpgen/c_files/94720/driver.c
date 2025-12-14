#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_12 = 2962374418128038081LL;
unsigned long long int var_13 = 9672621446702133458ULL;
signed char var_14 = (signed char)107;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6849569029183937365LL;
int zero = 0;
unsigned short var_19 = (unsigned short)3635;
unsigned long long int var_20 = 10853831279472183877ULL;
short var_21 = (short)-29533;
unsigned long long int var_22 = 783055562005165957ULL;
short var_23 = (short)2789;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 14474927631201462956ULL;
long long int var_26 = -8549415929057429822LL;
long long int var_27 = 9138539509713918537LL;
long long int arr_1 [14] ;
long long int arr_3 [14] ;
unsigned long long int arr_5 [14] ;
unsigned char arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4378898690930197062LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2831996963087549074LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16555266258915910714ULL : 16196483565980709241ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)37;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
