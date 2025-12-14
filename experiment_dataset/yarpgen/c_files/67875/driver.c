#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 454210691U;
unsigned long long int var_4 = 4132329163274871022ULL;
unsigned short var_5 = (unsigned short)42612;
long long int var_7 = 8664001258012999605LL;
unsigned long long int var_13 = 10684211377012709906ULL;
int zero = 0;
unsigned long long int var_14 = 1488024515783729075ULL;
unsigned long long int var_15 = 187702334465075661ULL;
unsigned int var_16 = 2501940720U;
int var_17 = -10488079;
unsigned long long int var_18 = 10328653990959645731ULL;
unsigned long long int var_19 = 224191920004010417ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)96;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)46322;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
