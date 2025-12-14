#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15764;
long long int var_4 = -196817794944476015LL;
unsigned short var_5 = (unsigned short)36469;
short var_8 = (short)23297;
unsigned char var_10 = (unsigned char)134;
int zero = 0;
unsigned char var_12 = (unsigned char)162;
unsigned char var_13 = (unsigned char)33;
unsigned long long int var_14 = 847845578679345881ULL;
signed char var_15 = (signed char)37;
long long int var_16 = -1497904221719406746LL;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)83;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
