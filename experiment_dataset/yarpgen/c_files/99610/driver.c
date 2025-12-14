#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2571591082U;
unsigned long long int var_2 = 3686562529415097263ULL;
long long int var_3 = -3682793965559755625LL;
long long int var_9 = -4092591078161384282LL;
short var_10 = (short)18464;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-9;
long long int var_13 = 3013552079094883400LL;
signed char var_14 = (signed char)-77;
signed char arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)113;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
