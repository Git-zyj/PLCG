#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1452934495U;
long long int var_13 = -3675794471661287222LL;
unsigned short var_14 = (unsigned short)25362;
unsigned long long int var_16 = 8591439771702159007ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)197;
unsigned long long int var_18 = 4284105480061142548ULL;
int var_19 = 838357328;
short var_20 = (short)29775;
unsigned long long int var_21 = 5691043282264683734ULL;
unsigned short arr_1 [10] ;
unsigned short arr_5 [10] ;
signed char arr_10 [15] ;
unsigned short arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32006 : (unsigned short)27418;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29239 : (unsigned short)61655;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20666 : (unsigned short)31207;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
