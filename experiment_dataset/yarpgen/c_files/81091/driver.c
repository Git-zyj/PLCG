#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
signed char var_1 = (signed char)-75;
unsigned short var_10 = (unsigned short)16605;
long long int var_12 = -827780487723121893LL;
int zero = 0;
signed char var_14 = (signed char)71;
unsigned int var_15 = 913718914U;
unsigned short var_16 = (unsigned short)40991;
short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)19656 : (short)15767;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
