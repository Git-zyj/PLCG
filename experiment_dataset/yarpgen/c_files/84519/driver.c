#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)10;
signed char var_3 = (signed char)116;
unsigned int var_4 = 95639614U;
unsigned long long int var_8 = 169543090220577208ULL;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
long long int var_13 = -4148941124640105687LL;
unsigned char var_14 = (unsigned char)238;
unsigned long long int var_15 = 13445307939198695190ULL;
int var_16 = 8804092;
signed char var_17 = (signed char)-90;
unsigned char var_18 = (unsigned char)94;
long long int var_19 = -5114091315340684980LL;
unsigned long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 17233463561145484355ULL;
}

void checksum() {
    hash(&seed, var_13);
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
