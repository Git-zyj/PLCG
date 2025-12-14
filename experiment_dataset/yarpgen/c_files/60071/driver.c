#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5739567287230354801LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 12407439262981859452ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4563395113267628664ULL;
short var_21 = (short)21869;
unsigned long long int var_22 = 14107217271961527531ULL;
unsigned char var_23 = (unsigned char)144;
signed char var_24 = (signed char)-72;
long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -8146916284334271139LL : -8802594121025782080LL;
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
