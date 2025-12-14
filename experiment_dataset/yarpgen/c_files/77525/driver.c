#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2307914605U;
short var_5 = (short)17150;
int var_7 = -1487720019;
int var_11 = 1875753599;
unsigned long long int var_13 = 11976911443132734521ULL;
int var_16 = 1048155327;
unsigned short var_17 = (unsigned short)922;
int zero = 0;
short var_19 = (short)8106;
long long int var_20 = -8013863567879142499LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 15698980898414848083ULL;
short var_23 = (short)25675;
long long int arr_4 [22] ;
unsigned char arr_5 [22] ;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7955216095682625599LL : -2979324129064349513LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)247 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8111716883627835219LL : -5595371777429687237LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
