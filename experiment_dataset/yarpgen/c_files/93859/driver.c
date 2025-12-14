#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1262559450U;
unsigned short var_6 = (unsigned short)62838;
long long int var_7 = -8746550072289392659LL;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)124;
unsigned long long int var_14 = 5556661024522503671ULL;
int var_15 = -1375245866;
int zero = 0;
unsigned short var_16 = (unsigned short)43055;
unsigned int var_17 = 981910314U;
unsigned long long int var_18 = 8573109257383140660ULL;
signed char var_19 = (signed char)-42;
short arr_0 [20] ;
_Bool arr_1 [20] ;
long long int arr_2 [20] ;
unsigned char arr_7 [20] [20] [20] [20] ;
unsigned long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)30047;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3749673328368228110LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)62 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16245716216617736863ULL : 13225424877339329825ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
