#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46444;
unsigned int var_5 = 1876615577U;
unsigned char var_7 = (unsigned char)119;
int var_9 = -34485544;
unsigned long long int var_12 = 12486788881730175552ULL;
long long int var_13 = 5403597635466508362LL;
int zero = 0;
short var_18 = (short)5203;
int var_19 = -548099590;
long long int var_20 = 2820829760755153413LL;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)160;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
