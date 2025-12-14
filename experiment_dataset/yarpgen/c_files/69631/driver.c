#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2800778785U;
long long int var_5 = 7589674412891107436LL;
_Bool var_11 = (_Bool)0;
signed char var_16 = (signed char)-63;
long long int var_17 = 4379676975224822840LL;
int zero = 0;
unsigned int var_20 = 3198283142U;
unsigned int var_21 = 1561982066U;
int var_22 = -1021289330;
long long int arr_0 [12] ;
_Bool arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5019109377735629314LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
