#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
signed char var_1 = (signed char)-73;
long long int var_2 = 5124437863771954627LL;
unsigned char var_3 = (unsigned char)10;
unsigned int var_4 = 2212532713U;
unsigned int var_5 = 2545991072U;
unsigned short var_6 = (unsigned short)26994;
short var_7 = (short)5887;
long long int var_8 = -5216036821619583201LL;
unsigned int var_9 = 675388111U;
unsigned short var_10 = (unsigned short)33351;
unsigned long long int var_11 = 10781592947457028129ULL;
int zero = 0;
short var_12 = (short)24897;
int var_13 = 1171037100;
short var_14 = (short)3649;
unsigned char var_15 = (unsigned char)56;
short var_16 = (short)10942;
unsigned short var_17 = (unsigned short)61528;
unsigned long long int var_18 = 13248865458660788792ULL;
signed char var_19 = (signed char)-7;
short arr_5 [25] [25] ;
short arr_22 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)8853 : (short)25649;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (short)-27995 : (short)-10952;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
