#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)184;
signed char var_6 = (signed char)31;
long long int var_7 = -3299390488141075058LL;
unsigned char var_10 = (unsigned char)220;
unsigned short var_11 = (unsigned short)59943;
int zero = 0;
short var_12 = (short)11945;
unsigned long long int var_13 = 11289838720697783629ULL;
unsigned long long int var_14 = 11989392650812174934ULL;
unsigned long long int var_15 = 17873287483399178300ULL;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 14453320256730923804ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
