#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6034802039255597148ULL;
short var_5 = (short)-676;
long long int var_11 = 1106692585018174644LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3337894573U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)81;
unsigned int var_23 = 1409756407U;
short arr_0 [23] ;
long long int arr_1 [23] [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-31657;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -6435915247383036756LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-11539;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
