#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1324993374;
unsigned long long int var_5 = 9951776984955688571ULL;
unsigned long long int var_7 = 7759000301888226777ULL;
int zero = 0;
long long int var_14 = -3809777576023376149LL;
unsigned long long int var_15 = 6723814586803742410ULL;
unsigned int var_16 = 2853412737U;
unsigned char var_17 = (unsigned char)240;
unsigned short var_18 = (unsigned short)24190;
unsigned char var_19 = (unsigned char)49;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2475182397U : 938988024U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
