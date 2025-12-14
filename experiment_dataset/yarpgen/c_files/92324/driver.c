#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned short var_2 = (unsigned short)30586;
unsigned long long int var_3 = 10524640853908504867ULL;
short var_8 = (short)30484;
unsigned int var_10 = 3733984071U;
signed char var_11 = (signed char)114;
unsigned long long int var_12 = 5474312684090148796ULL;
unsigned long long int var_14 = 16425699029292013614ULL;
short var_16 = (short)6999;
int zero = 0;
unsigned short var_17 = (unsigned short)4487;
unsigned short var_18 = (unsigned short)64472;
int var_19 = -1090190575;
unsigned long long int var_20 = 13310451017140800407ULL;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 8156268572446167972ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
