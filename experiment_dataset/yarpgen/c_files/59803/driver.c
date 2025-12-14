#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1104386920;
int var_2 = 286458999;
short var_3 = (short)-18673;
short var_7 = (short)-29935;
int var_8 = 2058537964;
int var_10 = -360748287;
int zero = 0;
unsigned char var_12 = (unsigned char)235;
int var_13 = -1036684429;
unsigned int var_14 = 2775641868U;
short var_15 = (short)10820;
unsigned int var_16 = 306488181U;
long long int var_17 = -148151610214781505LL;
unsigned int var_18 = 3356610968U;
short arr_0 [12] [12] ;
unsigned int arr_1 [12] [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-5022;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 3685877454U : 2641823578U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5621691155151118947LL : 4751784883355616564LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
