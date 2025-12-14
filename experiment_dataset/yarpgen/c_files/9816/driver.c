#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6681736895305819427LL;
unsigned short var_2 = (unsigned short)12063;
unsigned int var_4 = 2936276186U;
long long int var_5 = -7774114826338546759LL;
int var_8 = 289997473;
short var_9 = (short)-3479;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-18;
int zero = 0;
unsigned long long int var_13 = 15096725083292379838ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-7259;
long long int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 4097809813583872876LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
