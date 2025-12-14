#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1281856406762366211LL;
int var_1 = 2047121670;
int var_2 = -523921246;
short var_6 = (short)-16270;
signed char var_9 = (signed char)27;
short var_12 = (short)-866;
int zero = 0;
unsigned int var_13 = 2546852796U;
unsigned long long int var_14 = 2331453573335260268ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)10194;
signed char var_18 = (signed char)-50;
short arr_0 [21] ;
short arr_4 [24] ;
_Bool arr_5 [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-3837;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)9389;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)1 : (signed char)-9;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
