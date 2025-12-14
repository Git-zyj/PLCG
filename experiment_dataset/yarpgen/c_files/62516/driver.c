#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5641265047632020799ULL;
unsigned long long int var_3 = 6751361441200033392ULL;
int var_5 = 1990588924;
unsigned short var_8 = (unsigned short)52058;
unsigned char var_10 = (unsigned char)100;
unsigned long long int var_12 = 611632755585311030ULL;
unsigned long long int var_16 = 12377830306896860159ULL;
unsigned char var_19 = (unsigned char)5;
int zero = 0;
int var_20 = 157353772;
unsigned char var_21 = (unsigned char)205;
unsigned short var_22 = (unsigned short)13373;
int var_23 = -1850966250;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1844 : (unsigned short)25355;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
