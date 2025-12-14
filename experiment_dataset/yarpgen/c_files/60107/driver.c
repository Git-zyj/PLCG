#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8993037698941044947LL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)12046;
signed char var_6 = (signed char)-85;
unsigned char var_8 = (unsigned char)36;
int var_12 = 1511891567;
int zero = 0;
unsigned short var_16 = (unsigned short)29252;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)132;
signed char var_19 = (signed char)-54;
unsigned short var_20 = (unsigned short)41555;
int arr_0 [23] ;
int arr_2 [23] [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -579892839;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 2140108534;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)296;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
