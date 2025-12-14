#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14407950035130179251ULL;
unsigned short var_4 = (unsigned short)35328;
long long int var_8 = 4305274604418465180LL;
unsigned int var_13 = 1779037476U;
short var_15 = (short)15164;
int zero = 0;
unsigned long long int var_19 = 7367112182649949981ULL;
int var_20 = 1359606118;
short var_21 = (short)-24938;
unsigned short var_22 = (unsigned short)46625;
unsigned int var_23 = 2426044643U;
short arr_0 [11] ;
unsigned int arr_1 [11] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-25692;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3631889844U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1921238564434921869LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
