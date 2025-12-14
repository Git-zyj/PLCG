#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26833;
short var_2 = (short)18931;
unsigned long long int var_5 = 7752221713177356252ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 366146731922333701ULL;
signed char var_10 = (signed char)101;
unsigned long long int var_11 = 18707726703085929ULL;
short var_13 = (short)9624;
int zero = 0;
unsigned int var_14 = 1019567030U;
unsigned short var_15 = (unsigned short)21366;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7645555743555521576ULL;
unsigned char var_18 = (unsigned char)75;
short arr_1 [25] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-28214 : (short)-15162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11727626892599111285ULL : 2075186112144918166ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
