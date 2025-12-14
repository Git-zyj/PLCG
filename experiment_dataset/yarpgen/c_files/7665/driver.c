#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 3432173741U;
short var_21 = (short)-578;
unsigned short var_22 = (unsigned short)60799;
long long int var_23 = -723791031772348752LL;
signed char var_24 = (signed char)-24;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1522604192;
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
