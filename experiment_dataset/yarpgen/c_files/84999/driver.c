#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9205927019972341165LL;
signed char var_6 = (signed char)30;
unsigned long long int var_7 = 11116553594172611553ULL;
long long int var_9 = 3034242501360048239LL;
int zero = 0;
unsigned long long int var_13 = 1101971207180786493ULL;
long long int var_14 = -6557634068507573343LL;
unsigned char var_15 = (unsigned char)194;
signed char var_16 = (signed char)110;
unsigned int var_17 = 3968564945U;
unsigned short var_18 = (unsigned short)6820;
unsigned long long int var_19 = 14795062540093379090ULL;
unsigned int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1973367322U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
