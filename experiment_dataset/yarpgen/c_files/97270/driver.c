#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11482;
signed char var_1 = (signed char)-75;
short var_2 = (short)5527;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-10;
unsigned int var_6 = 664562792U;
short var_9 = (short)-27028;
int zero = 0;
unsigned char var_10 = (unsigned char)182;
signed char var_11 = (signed char)23;
short var_12 = (short)16540;
unsigned char var_13 = (unsigned char)109;
signed char var_14 = (signed char)13;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)30842;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
