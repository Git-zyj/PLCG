#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14157;
short var_2 = (short)18699;
short var_3 = (short)26324;
signed char var_5 = (signed char)-103;
signed char var_8 = (signed char)-6;
int zero = 0;
long long int var_12 = 13720026315631139LL;
unsigned char var_13 = (unsigned char)223;
unsigned long long int var_14 = 11080239807092209387ULL;
short var_15 = (short)25797;
short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-26689;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
