#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
unsigned long long int var_2 = 2826190285641715451ULL;
long long int var_4 = -663378494581409162LL;
int zero = 0;
unsigned char var_12 = (unsigned char)87;
unsigned long long int var_13 = 1529217332341697619ULL;
unsigned short var_14 = (unsigned short)52704;
unsigned long long int var_15 = 8980517194161202963ULL;
_Bool arr_3 [14] [14] [14] ;
unsigned long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 2170106957688970781ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
