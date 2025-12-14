#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9222465976924178519LL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1165762394U;
int zero = 0;
long long int var_19 = -77812923145395842LL;
int var_20 = 207976814;
short var_21 = (short)7905;
int var_22 = -910040757;
long long int var_23 = -2568272857538978701LL;
unsigned short var_24 = (unsigned short)60611;
unsigned char arr_4 [24] ;
short arr_5 [24] ;
unsigned int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)1534;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 1368217442U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
