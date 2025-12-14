#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3153612424U;
unsigned char var_5 = (unsigned char)69;
unsigned long long int var_7 = 6495466229821302644ULL;
unsigned long long int var_14 = 10537920019815473836ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)94;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)221;
_Bool var_23 = (_Bool)0;
unsigned short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)43063;
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
