#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13595724303618196301ULL;
int var_1 = -1996293362;
long long int var_5 = -2362596470061686249LL;
int var_6 = 868455887;
short var_8 = (short)-6123;
unsigned char var_10 = (unsigned char)255;
unsigned short var_11 = (unsigned short)24411;
long long int var_13 = 8743702853118091212LL;
unsigned char var_15 = (unsigned char)172;
int zero = 0;
unsigned long long int var_16 = 6346482140562944445ULL;
unsigned long long int var_17 = 16905755008358060516ULL;
unsigned long long int var_18 = 14030741593624642122ULL;
unsigned long long int var_19 = 10494883317169870807ULL;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)133;
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
