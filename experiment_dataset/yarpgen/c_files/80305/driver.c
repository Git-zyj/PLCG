#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2082277103;
unsigned short var_4 = (unsigned short)16128;
signed char var_5 = (signed char)-50;
int zero = 0;
int var_18 = 861958572;
long long int var_19 = 7700873819966597660LL;
short var_20 = (short)-30381;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3517673289U;
unsigned long long int var_23 = 10832819721251269196ULL;
unsigned char arr_1 [20] ;
unsigned long long int arr_2 [20] ;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1950965692496516835ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)9169;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
