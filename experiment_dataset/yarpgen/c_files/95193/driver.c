#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)36;
short var_5 = (short)-1731;
signed char var_8 = (signed char)-30;
signed char var_12 = (signed char)-11;
int zero = 0;
signed char var_13 = (signed char)-111;
signed char var_14 = (signed char)109;
long long int var_15 = -2410998534266574161LL;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49670 : (unsigned short)5904;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
