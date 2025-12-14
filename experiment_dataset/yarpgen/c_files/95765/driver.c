#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 466099313184699174ULL;
unsigned short var_10 = (unsigned short)30570;
unsigned short var_11 = (unsigned short)18110;
unsigned short var_12 = (unsigned short)56466;
int zero = 0;
unsigned char var_13 = (unsigned char)214;
_Bool var_14 = (_Bool)1;
short var_15 = (short)163;
long long int var_16 = -4621442197203258754LL;
long long int var_17 = -7480406018666962044LL;
unsigned long long int var_18 = 9379193702077827801ULL;
unsigned short var_19 = (unsigned short)46701;
long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 2412234949759163849LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
