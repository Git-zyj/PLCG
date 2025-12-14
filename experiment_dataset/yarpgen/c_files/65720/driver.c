#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2047901495915340939LL;
int zero = 0;
unsigned int var_11 = 3061468330U;
unsigned long long int var_12 = 1840591821116882651ULL;
signed char var_13 = (signed char)-112;
unsigned char var_14 = (unsigned char)14;
unsigned int var_15 = 1345947408U;
unsigned int var_16 = 1193554458U;
unsigned long long int var_17 = 13295471976781084978ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8199843119710187271LL;
unsigned char var_20 = (unsigned char)10;
int var_21 = 736620854;
short var_22 = (short)25295;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)76;
signed char arr_21 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)97;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
