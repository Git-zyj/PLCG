#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_14 = (unsigned char)61;
unsigned char var_18 = (unsigned char)187;
int zero = 0;
long long int var_19 = 4700493615034324843LL;
unsigned char var_20 = (unsigned char)238;
short var_21 = (short)-6323;
unsigned char var_22 = (unsigned char)202;
unsigned long long int var_23 = 1574819741642295760ULL;
unsigned char var_24 = (unsigned char)123;
short var_25 = (short)2716;
unsigned char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)9;
}

void checksum() {
    hash(&seed, var_19);
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
