#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15193;
signed char var_1 = (signed char)-115;
int var_2 = -997325422;
signed char var_4 = (signed char)51;
signed char var_5 = (signed char)111;
int var_6 = 544510528;
short var_9 = (short)-16129;
int var_12 = 103326458;
int zero = 0;
short var_13 = (short)-17768;
long long int var_14 = -5165462806012920769LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)28817;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1474211028 : -1193551085;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
