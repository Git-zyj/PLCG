#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 4858452625910099058ULL;
unsigned int var_4 = 727000458U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)30221;
unsigned int var_9 = 2861467068U;
unsigned long long int var_11 = 5839647494586170278ULL;
long long int var_12 = -3032401754553749418LL;
unsigned long long int var_13 = 1571911590583836502ULL;
signed char var_17 = (signed char)37;
int zero = 0;
int var_18 = 1710513442;
unsigned short var_19 = (unsigned short)47699;
signed char var_20 = (signed char)72;
long long int var_21 = 6014486312447957266LL;
long long int var_22 = -7557293537468831983LL;
int var_23 = -1612408497;
unsigned short var_24 = (unsigned short)17933;
int var_25 = 484694295;
unsigned char arr_4 [10] ;
int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1872992970 : -712223305;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
