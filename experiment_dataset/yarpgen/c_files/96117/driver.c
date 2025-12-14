#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6498;
signed char var_3 = (signed char)78;
unsigned char var_4 = (unsigned char)182;
unsigned int var_6 = 2238979047U;
unsigned char var_7 = (unsigned char)228;
unsigned char var_8 = (unsigned char)87;
unsigned char var_9 = (unsigned char)128;
short var_11 = (short)-15567;
unsigned short var_12 = (unsigned short)15638;
unsigned long long int var_13 = 11426288316375950382ULL;
signed char var_14 = (signed char)-100;
unsigned long long int var_15 = 14717414582595810483ULL;
long long int var_16 = -4063885461281854519LL;
unsigned short var_19 = (unsigned short)48197;
int zero = 0;
long long int var_20 = -398072793372440590LL;
short var_21 = (short)-19945;
short var_22 = (short)-10879;
short var_23 = (short)-7537;
signed char var_24 = (signed char)-112;
short var_25 = (short)14444;
_Bool arr_1 [11] ;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 11046718852989170147ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
