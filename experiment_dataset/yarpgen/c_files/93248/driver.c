#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37022;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 985087237180887989ULL;
unsigned short var_9 = (unsigned short)41673;
unsigned long long int var_10 = 16715625492120287723ULL;
int var_11 = 631128423;
unsigned int var_16 = 739046758U;
signed char var_17 = (signed char)-13;
unsigned long long int var_18 = 9348797774888060519ULL;
unsigned int var_19 = 2988941088U;
int zero = 0;
short var_20 = (short)7079;
int var_21 = 533377259;
signed char var_22 = (signed char)112;
unsigned long long int var_23 = 14717487728054825833ULL;
unsigned short var_24 = (unsigned short)56188;
signed char var_25 = (signed char)-27;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8488989801182632739ULL : 6371859778926088523ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
