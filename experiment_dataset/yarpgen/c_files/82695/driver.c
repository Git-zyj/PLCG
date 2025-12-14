#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1311643915;
unsigned long long int var_12 = 9299986172941965236ULL;
unsigned int var_15 = 4200941158U;
int zero = 0;
short var_17 = (short)30923;
unsigned int var_18 = 3439993762U;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5778404631940983694LL;
unsigned char var_21 = (unsigned char)10;
long long int var_22 = 2944971799204687342LL;
unsigned char var_23 = (unsigned char)70;
signed char arr_0 [25] [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -2049874997;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
