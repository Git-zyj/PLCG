#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27973;
unsigned int var_3 = 845187366U;
long long int var_4 = -6521941329892452926LL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)56995;
unsigned short var_10 = (unsigned short)59041;
unsigned short var_11 = (unsigned short)7036;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-65;
unsigned char var_14 = (unsigned char)81;
unsigned short var_15 = (unsigned short)52996;
long long int var_17 = 2209184433282115086LL;
int zero = 0;
unsigned short var_18 = (unsigned short)34674;
unsigned long long int var_19 = 9645895531584479197ULL;
long long int var_20 = 3981514600543413766LL;
unsigned int var_21 = 1873283108U;
_Bool var_22 = (_Bool)1;
int var_23 = 929675407;
signed char var_24 = (signed char)71;
unsigned int var_25 = 566497068U;
int var_26 = 1538559766;
short arr_25 [21] ;
unsigned short arr_38 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (short)8282;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)50852;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
