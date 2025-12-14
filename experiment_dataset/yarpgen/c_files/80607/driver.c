#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3307140684900862588LL;
unsigned int var_2 = 4153851802U;
long long int var_5 = -1699325164994852756LL;
unsigned int var_7 = 779208132U;
int var_8 = 144916382;
long long int var_9 = 7648733416868956725LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2802004570U;
int zero = 0;
short var_13 = (short)22377;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2781229245U;
short var_16 = (short)31867;
signed char var_17 = (signed char)91;
signed char arr_6 [22] ;
unsigned int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2244102570U : 3206639114U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
