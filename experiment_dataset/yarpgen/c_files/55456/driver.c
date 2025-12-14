#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5742940611214855872LL;
signed char var_3 = (signed char)-26;
unsigned long long int var_9 = 16636226860874298528ULL;
long long int var_10 = -134756389581174297LL;
unsigned int var_12 = 2249402407U;
int zero = 0;
int var_19 = -1949869830;
unsigned long long int var_20 = 8659409366150706719ULL;
unsigned char arr_3 [13] ;
short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)27916;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
