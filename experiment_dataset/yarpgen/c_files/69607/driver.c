#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)26;
unsigned char var_6 = (unsigned char)196;
unsigned char var_7 = (unsigned char)211;
long long int var_9 = 2539258304862156943LL;
unsigned char var_10 = (unsigned char)50;
unsigned char var_11 = (unsigned char)174;
unsigned char var_14 = (unsigned char)155;
long long int var_17 = -890419633863152512LL;
int zero = 0;
long long int var_18 = 3034448614388069352LL;
long long int var_19 = 3633157211087972450LL;
unsigned char var_20 = (unsigned char)75;
unsigned char var_21 = (unsigned char)55;
unsigned char var_22 = (unsigned char)59;
long long int var_23 = 8332879261333815364LL;
unsigned char var_24 = (unsigned char)220;
long long int var_25 = 5481063500248584098LL;
long long int var_26 = -3578735664579429860LL;
unsigned char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
