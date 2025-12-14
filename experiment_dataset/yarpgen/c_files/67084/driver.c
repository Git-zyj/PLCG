#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3732284614817469969LL;
unsigned char var_3 = (unsigned char)69;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 2342875465188579669ULL;
unsigned char var_9 = (unsigned char)212;
unsigned char var_10 = (unsigned char)52;
unsigned long long int var_15 = 11802969587598353868ULL;
int var_16 = 561339475;
long long int var_17 = 7083778030074340103LL;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
unsigned long long int var_19 = 9669738909538043092ULL;
unsigned long long int var_20 = 2154119353107777919ULL;
unsigned char var_21 = (unsigned char)232;
long long int var_22 = -8280909651794194637LL;
unsigned long long int arr_1 [15] ;
unsigned short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 993524845827071343ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)35185;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
