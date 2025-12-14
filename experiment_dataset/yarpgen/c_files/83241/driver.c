#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 290893838699354355LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)89;
long long int var_6 = 6365749487586645082LL;
unsigned short var_7 = (unsigned short)1554;
unsigned long long int var_10 = 10299268972403973806ULL;
unsigned short var_12 = (unsigned short)6556;
_Bool var_16 = (_Bool)1;
int var_18 = -1468149269;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -187109998;
unsigned short var_21 = (unsigned short)42986;
unsigned short var_22 = (unsigned short)30524;
signed char var_23 = (signed char)46;
_Bool var_24 = (_Bool)1;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)38879;
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
