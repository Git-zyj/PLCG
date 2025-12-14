#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1935384483;
_Bool var_4 = (_Bool)1;
int var_5 = -927446766;
long long int var_6 = 3164021873564976223LL;
unsigned char var_9 = (unsigned char)184;
unsigned long long int var_11 = 4358082577712089826ULL;
int zero = 0;
unsigned int var_12 = 734012963U;
short var_13 = (short)340;
_Bool arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
