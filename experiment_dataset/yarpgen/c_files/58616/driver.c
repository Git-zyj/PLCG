#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 12042990872177182388ULL;
unsigned short var_11 = (unsigned short)61536;
_Bool var_12 = (_Bool)1;
short var_15 = (short)16017;
int zero = 0;
short var_16 = (short)-31208;
long long int var_17 = -2063399818895725146LL;
int var_18 = 216914966;
unsigned short var_19 = (unsigned short)39899;
long long int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -591353905278546822LL : -819763752728823255LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
