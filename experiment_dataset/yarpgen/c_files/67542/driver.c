#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned int var_2 = 3727692407U;
int var_5 = 201997922;
int var_7 = 171241;
signed char var_14 = (signed char)-56;
int zero = 0;
short var_15 = (short)-758;
short var_16 = (short)-23207;
unsigned int var_17 = 1055393699U;
long long int var_18 = 464187858505654581LL;
signed char var_19 = (signed char)89;
signed char var_20 = (signed char)-67;
short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-11754;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
