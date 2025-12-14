#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8535450483033214528LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 889943074U;
int zero = 0;
unsigned long long int var_11 = 15281256552608991384ULL;
unsigned long long int var_12 = 13223909055844055764ULL;
unsigned char var_13 = (unsigned char)212;
unsigned int var_14 = 585561482U;
unsigned int var_15 = 796491927U;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -9150508714830759489LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
