#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned char var_1 = (unsigned char)45;
long long int var_2 = 3589555554289934669LL;
short var_6 = (short)8565;
unsigned char var_7 = (unsigned char)136;
short var_8 = (short)-6181;
int var_9 = 283087376;
int var_11 = -1973094969;
short var_15 = (short)-18694;
short var_19 = (short)14520;
int zero = 0;
short var_20 = (short)-18280;
int var_21 = 166659558;
unsigned long long int var_22 = 465623421946405078ULL;
unsigned char var_23 = (unsigned char)103;
unsigned char arr_0 [22] ;
short arr_1 [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-22781;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -5707270203594986221LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
