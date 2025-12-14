#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 1570533603562369441ULL;
unsigned long long int var_8 = 4693665837378304934ULL;
signed char var_9 = (signed char)-119;
signed char var_10 = (signed char)-56;
int zero = 0;
int var_11 = 688819363;
long long int var_12 = 1810016200722205042LL;
unsigned int var_13 = 159896939U;
unsigned long long int var_14 = 17674830844252485697ULL;
int var_15 = 1820849443;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)6;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
