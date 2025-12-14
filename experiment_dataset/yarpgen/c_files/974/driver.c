#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7458;
unsigned char var_2 = (unsigned char)248;
unsigned int var_3 = 208541196U;
long long int var_4 = -7166279522903749025LL;
short var_7 = (short)-28956;
int var_10 = -1260535927;
unsigned char var_12 = (unsigned char)39;
unsigned int var_15 = 4117736025U;
int zero = 0;
int var_16 = -1294865987;
long long int var_17 = -8561982115418851644LL;
int var_18 = 203388031;
unsigned short var_19 = (unsigned short)14850;
unsigned char arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)214 : (unsigned char)213;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
