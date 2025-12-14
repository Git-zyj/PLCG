#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7840698325466126325ULL;
unsigned long long int var_1 = 4023933653967147807ULL;
unsigned long long int var_3 = 7559974364715639418ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)39041;
int var_12 = 776465828;
unsigned long long int var_13 = 13510101052319353545ULL;
int zero = 0;
short var_15 = (short)14454;
unsigned long long int var_16 = 610671541238863209ULL;
unsigned short var_17 = (unsigned short)24551;
unsigned long long int var_18 = 13539593777990924587ULL;
unsigned int arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
unsigned int arr_2 [18] ;
int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 4078656455U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3413158598U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1614383619U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -808985108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
