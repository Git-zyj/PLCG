#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 135667164U;
long long int var_1 = 3461747465632006309LL;
int var_2 = 290747938;
int var_3 = 2002910493;
unsigned int var_5 = 3981373046U;
short var_11 = (short)2205;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1553673969;
unsigned long long int var_18 = 10935315095595312821ULL;
unsigned char var_19 = (unsigned char)80;
signed char var_20 = (signed char)-81;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 2932516652403704077ULL;
unsigned long long int arr_0 [18] ;
unsigned short arr_3 [18] ;
short arr_7 [18] [18] [18] ;
long long int arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 14957587882995723478ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)36749;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-15243 : (short)-7271;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -5661799155223759552LL : 6009044997631673595LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
