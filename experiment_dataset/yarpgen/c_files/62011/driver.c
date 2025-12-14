#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 417888540;
signed char var_11 = (signed char)-36;
unsigned char var_16 = (unsigned char)233;
int zero = 0;
unsigned long long int var_20 = 6015786486260040085ULL;
short var_21 = (short)-26789;
short var_22 = (short)-12012;
unsigned long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 6685831395885085719ULL : 15907518394012408858ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
