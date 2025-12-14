#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21496;
unsigned char var_7 = (unsigned char)108;
signed char var_9 = (signed char)-94;
short var_10 = (short)-20801;
unsigned int var_11 = 576179180U;
unsigned long long int var_14 = 8089517947003203988ULL;
short var_16 = (short)18804;
int var_18 = -484530885;
int zero = 0;
unsigned long long int var_19 = 12642317944377675233ULL;
unsigned long long int var_20 = 3294920642333812692ULL;
signed char arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 597531615173027612ULL : 5981133220295167518ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
