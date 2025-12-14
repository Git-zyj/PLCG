#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 117600176;
unsigned long long int var_4 = 7560599990707868014ULL;
int var_5 = 134698310;
int var_6 = -370170141;
unsigned long long int var_10 = 17605758561735904635ULL;
signed char var_13 = (signed char)-7;
int var_14 = -423523266;
signed char var_15 = (signed char)-97;
unsigned int var_16 = 102184245U;
int zero = 0;
signed char var_17 = (signed char)-105;
unsigned long long int var_18 = 16456046680611340094ULL;
unsigned short var_19 = (unsigned short)35817;
int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 218087293;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
