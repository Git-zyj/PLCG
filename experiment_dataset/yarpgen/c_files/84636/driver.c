#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22205;
int var_4 = 67894335;
signed char var_9 = (signed char)-64;
short var_10 = (short)18059;
unsigned short var_12 = (unsigned short)3540;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 798665907;
unsigned long long int var_15 = 3648492443219444366ULL;
signed char var_16 = (signed char)-36;
unsigned short var_17 = (unsigned short)48034;
int var_18 = -128801576;
unsigned short arr_0 [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12594 : (unsigned short)15687;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9558969841039443322ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
