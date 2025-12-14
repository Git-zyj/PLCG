#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
unsigned int var_2 = 2836393385U;
unsigned int var_3 = 1960676691U;
unsigned int var_6 = 1524239071U;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 1481298260;
unsigned short var_11 = (unsigned short)52947;
long long int var_12 = 2917922321143369430LL;
unsigned int var_13 = 2752109847U;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
