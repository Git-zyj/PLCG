#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2084912239136904833ULL;
unsigned long long int var_4 = 18008733261481619518ULL;
unsigned char var_5 = (unsigned char)36;
unsigned long long int var_8 = 11152342544450485789ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5622396911993207394LL;
short var_11 = (short)-2625;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
int var_17 = 210041779;
int var_18 = 1528200864;
long long int var_19 = -5128731265482829228LL;
short arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)28101 : (short)19425;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
