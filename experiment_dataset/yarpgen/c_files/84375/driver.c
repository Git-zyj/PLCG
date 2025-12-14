#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13565;
signed char var_4 = (signed char)102;
unsigned int var_5 = 3013375780U;
short var_6 = (short)-29579;
unsigned int var_7 = 813194952U;
signed char var_8 = (signed char)25;
unsigned char var_9 = (unsigned char)109;
unsigned long long int var_10 = 1498019753608983392ULL;
unsigned int var_11 = 3039566080U;
unsigned long long int var_14 = 16868949012528324306ULL;
signed char var_15 = (signed char)66;
signed char var_16 = (signed char)102;
int zero = 0;
long long int var_19 = 2840759985842914551LL;
unsigned int var_20 = 3326550324U;
short var_21 = (short)-6077;
unsigned int var_22 = 554881814U;
unsigned int var_23 = 4157420739U;
short arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
signed char arr_2 [25] ;
short arr_3 [25] ;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-2609;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 647337966U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)14190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
