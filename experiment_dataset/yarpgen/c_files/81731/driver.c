#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7692482063866905167ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5211116457776718815ULL;
short var_6 = (short)-20450;
unsigned long long int var_7 = 5254256012206493373ULL;
unsigned char var_8 = (unsigned char)132;
unsigned char var_13 = (unsigned char)4;
signed char var_14 = (signed char)70;
unsigned short var_15 = (unsigned short)11557;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)50235;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-24358;
unsigned short var_22 = (unsigned short)48827;
short var_23 = (short)16266;
short var_24 = (short)-10926;
unsigned char var_25 = (unsigned char)124;
short var_26 = (short)11082;
unsigned int var_27 = 3346215499U;
unsigned short arr_0 [18] ;
unsigned short arr_3 [18] [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)16035;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)21585;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5092954661862968546ULL : 6290351121288672000ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
