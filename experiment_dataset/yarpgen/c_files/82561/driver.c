#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
short var_2 = (short)-7363;
int var_7 = 965001674;
short var_16 = (short)6787;
int var_17 = 216855106;
int zero = 0;
unsigned int var_19 = 3934649165U;
signed char var_20 = (signed char)8;
unsigned int var_21 = 3804499230U;
long long int var_22 = 2480390247731743231LL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-3;
unsigned int arr_6 [23] ;
_Bool arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1291309721U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
