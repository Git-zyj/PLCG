#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
long long int var_1 = 5921157981108279354LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 6984544585693663509ULL;
long long int var_9 = 4564342494540836909LL;
signed char var_10 = (signed char)-48;
unsigned long long int var_11 = 10254994474641855143ULL;
int zero = 0;
unsigned long long int var_12 = 13719934985026039682ULL;
signed char var_13 = (signed char)-28;
int var_14 = 156519940;
signed char var_15 = (signed char)123;
unsigned char var_16 = (unsigned char)157;
short var_17 = (short)24007;
short arr_1 [22] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-16339;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
