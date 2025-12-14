#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6096;
unsigned char var_2 = (unsigned char)227;
signed char var_5 = (signed char)25;
unsigned int var_6 = 1635385931U;
signed char var_7 = (signed char)-93;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-110;
int var_10 = 765602503;
int zero = 0;
long long int var_12 = 6552567388839716585LL;
unsigned char var_13 = (unsigned char)174;
short var_14 = (short)25288;
long long int arr_0 [25] [25] ;
long long int arr_3 [25] ;
int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -5695915690064146077LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -6646026807676339796LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1775919071;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
