#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25762;
signed char var_3 = (signed char)-121;
long long int var_5 = -2744437003388982499LL;
int var_6 = 2055085985;
long long int var_8 = -6000558729882519123LL;
int zero = 0;
long long int var_10 = -6129488714749811062LL;
unsigned short var_11 = (unsigned short)10864;
int var_12 = -656654969;
int var_13 = -323861989;
int var_14 = -157611111;
unsigned short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)4148;
}

void checksum() {
    hash(&seed, var_10);
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
