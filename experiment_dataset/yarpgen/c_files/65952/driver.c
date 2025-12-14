#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_6 = 2064159980U;
long long int var_7 = -6782601703515042510LL;
long long int var_12 = -6139054636252938608LL;
long long int var_15 = -803275510699914071LL;
int zero = 0;
unsigned short var_20 = (unsigned short)65147;
unsigned short var_21 = (unsigned short)50703;
long long int var_22 = -7718138953973003961LL;
short var_23 = (short)-2381;
long long int var_24 = 8267602668119914645LL;
_Bool var_25 = (_Bool)1;
unsigned short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14446 : (unsigned short)29939;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
