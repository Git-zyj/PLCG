#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1185774024;
unsigned short var_3 = (unsigned short)25228;
int var_6 = 16476229;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16574936550420960809ULL;
signed char var_11 = (signed char)-49;
int zero = 0;
int var_17 = -1451978336;
int var_18 = -1166483001;
unsigned int var_19 = 2975459327U;
signed char arr_1 [23] ;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1699642451;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
