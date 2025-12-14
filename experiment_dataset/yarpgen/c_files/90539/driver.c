#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31867;
unsigned short var_5 = (unsigned short)62357;
unsigned long long int var_6 = 17414430824271250978ULL;
unsigned long long int var_8 = 16038747051366821932ULL;
long long int var_9 = -6647149269940746090LL;
signed char var_11 = (signed char)51;
unsigned short var_15 = (unsigned short)41614;
int zero = 0;
unsigned short var_16 = (unsigned short)2902;
unsigned char var_17 = (unsigned char)87;
unsigned int var_18 = 2189044474U;
_Bool var_19 = (_Bool)1;
unsigned short arr_5 [20] [20] ;
unsigned short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)2664;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)17347;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
