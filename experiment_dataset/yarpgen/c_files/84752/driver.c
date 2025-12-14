#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
_Bool var_2 = (_Bool)1;
int var_6 = 782526451;
unsigned long long int var_10 = 10003456744289757361ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 13649159017696045273ULL;
unsigned long long int var_17 = 7242096317923949267ULL;
unsigned long long int var_18 = 9692161572127752827ULL;
unsigned long long int var_19 = 14969245258079002310ULL;
short arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)31737 : (short)-13914;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
