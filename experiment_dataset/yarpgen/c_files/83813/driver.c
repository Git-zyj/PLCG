#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5536431322720414593ULL;
unsigned short var_9 = (unsigned short)62701;
int var_14 = -1714182210;
int zero = 0;
unsigned long long int var_18 = 6075224303533803774ULL;
short var_19 = (short)-31833;
unsigned short var_20 = (unsigned short)48670;
unsigned short var_21 = (unsigned short)62045;
short var_22 = (short)31144;
unsigned short arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)57983;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
