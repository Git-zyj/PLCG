#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1044541118;
unsigned int var_4 = 3163179355U;
unsigned short var_6 = (unsigned short)56787;
unsigned long long int var_7 = 867423359584163574ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_19 = (unsigned char)153;
int zero = 0;
unsigned short var_20 = (unsigned short)33648;
long long int var_21 = -1141641193871208326LL;
long long int var_22 = -7078876104849499667LL;
unsigned long long int var_23 = 6085485361924856738ULL;
signed char var_24 = (signed char)74;
unsigned long long int arr_1 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 10530551555147180738ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-20636;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
