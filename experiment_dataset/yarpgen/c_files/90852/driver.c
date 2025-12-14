#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 237191161U;
_Bool var_10 = (_Bool)1;
long long int var_13 = -3358913216426854097LL;
unsigned int var_15 = 3009109762U;
int zero = 0;
signed char var_20 = (signed char)125;
unsigned int var_21 = 2344907842U;
unsigned short var_22 = (unsigned short)707;
unsigned char var_23 = (unsigned char)249;
_Bool var_24 = (_Bool)0;
long long int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 6755856660133408896LL;
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
