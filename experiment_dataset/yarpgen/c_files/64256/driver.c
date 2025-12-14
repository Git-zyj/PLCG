#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -864653987;
unsigned int var_2 = 3470725285U;
unsigned int var_5 = 1892653653U;
int var_13 = -320343550;
signed char var_15 = (signed char)-32;
long long int var_16 = 4660210183592671294LL;
int zero = 0;
int var_20 = 1225073812;
unsigned int var_21 = 647893418U;
signed char var_22 = (signed char)-13;
_Bool arr_0 [25] ;
unsigned int arr_2 [25] ;
long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3051257614U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 6972810971737776129LL;
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
