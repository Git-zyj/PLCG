#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1412741776;
unsigned long long int var_3 = 5625960437743026114ULL;
unsigned short var_4 = (unsigned short)62259;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)78;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)4299;
unsigned long long int var_15 = 1114176104374547593ULL;
unsigned long long int var_18 = 8096239554197894283ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)117;
unsigned long long int var_21 = 9458604617847983567ULL;
unsigned short var_22 = (unsigned short)63973;
signed char var_23 = (signed char)48;
int arr_2 [21] [21] [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1195110995;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2616915644657719699ULL : 13909756572080987514ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
