#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2051530003U;
unsigned int var_2 = 3402903693U;
unsigned char var_5 = (unsigned char)132;
unsigned long long int var_9 = 716520146708554547ULL;
signed char var_10 = (signed char)-52;
int zero = 0;
short var_17 = (short)26639;
unsigned long long int var_18 = 2038041991677502513ULL;
long long int var_19 = -7175708415883740729LL;
signed char var_20 = (signed char)-76;
signed char var_21 = (signed char)-48;
unsigned char arr_0 [20] ;
long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -6042602898079818679LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
