#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 556000717;
signed char var_6 = (signed char)-53;
signed char var_7 = (signed char)-84;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 17841859276468985871ULL;
int zero = 0;
unsigned int var_19 = 573519584U;
int var_20 = 182813401;
unsigned short var_21 = (unsigned short)44921;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 16040863186730265954ULL;
long long int arr_0 [16] ;
unsigned int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4217419865310653310LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3776596144U;
}

void checksum() {
    hash(&seed, var_19);
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
