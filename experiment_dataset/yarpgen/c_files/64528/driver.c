#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18761;
unsigned int var_5 = 2065837484U;
_Bool var_6 = (_Bool)0;
long long int var_8 = -8151005351470011324LL;
signed char var_9 = (signed char)61;
int zero = 0;
unsigned long long int var_10 = 13000186298918197189ULL;
unsigned long long int var_11 = 10280232179116285903ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned long long int arr_0 [15] [15] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 14214364263123183814ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -3389579777028346464LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
