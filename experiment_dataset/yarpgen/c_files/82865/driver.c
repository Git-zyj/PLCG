#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3553387117717721655LL;
unsigned int var_4 = 3287309941U;
long long int var_9 = 4854307916687608820LL;
long long int var_10 = -1772313861013421557LL;
unsigned int var_12 = 2861810077U;
int zero = 0;
unsigned short var_13 = (unsigned short)50888;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4615679832739988146LL;
int var_16 = -67729459;
unsigned short var_17 = (unsigned short)56936;
long long int var_18 = 7899442871356397919LL;
unsigned int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1707537464U;
}

void checksum() {
    hash(&seed, var_13);
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
