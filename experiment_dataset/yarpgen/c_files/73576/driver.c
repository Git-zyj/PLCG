#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
signed char var_3 = (signed char)9;
long long int var_4 = -6055320605902136064LL;
unsigned long long int var_7 = 245899615890687041ULL;
unsigned short var_9 = (unsigned short)24260;
int zero = 0;
long long int var_10 = -5568700583297117933LL;
unsigned long long int var_11 = 2743320666316583048ULL;
unsigned short var_12 = (unsigned short)42162;
signed char var_13 = (signed char)-18;
unsigned short var_14 = (unsigned short)24896;
signed char arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
