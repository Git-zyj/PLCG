#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3674538916143989959LL;
unsigned long long int var_3 = 6716102193367173268ULL;
long long int var_5 = -5820550174124274190LL;
long long int var_8 = 2826869622343300450LL;
int zero = 0;
unsigned short var_11 = (unsigned short)25489;
signed char var_12 = (signed char)67;
signed char var_13 = (signed char)-37;
unsigned short var_14 = (unsigned short)35539;
unsigned short var_15 = (unsigned short)39373;
unsigned long long int arr_0 [23] ;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2427038964239111801ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 881157344U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
