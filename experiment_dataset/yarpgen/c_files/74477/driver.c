#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
long long int var_1 = -7371087997586875216LL;
long long int var_2 = -2971417009982520205LL;
unsigned int var_3 = 3409159030U;
unsigned int var_4 = 3544509104U;
unsigned int var_5 = 718684445U;
unsigned int var_6 = 2850846550U;
signed char var_7 = (signed char)-19;
long long int var_10 = -5165103825528727041LL;
signed char var_11 = (signed char)112;
unsigned int var_12 = 1022263144U;
long long int var_13 = -6060314927963960501LL;
long long int var_14 = 5655782690574609704LL;
long long int var_15 = 8739406825833241730LL;
signed char var_16 = (signed char)-39;
int zero = 0;
signed char var_17 = (signed char)90;
long long int var_18 = -1874320720670557449LL;
signed char var_19 = (signed char)-113;
signed char var_20 = (signed char)-98;
signed char var_21 = (signed char)-96;
signed char var_22 = (signed char)80;
signed char var_23 = (signed char)60;
long long int var_24 = 5662622072836424062LL;
long long int var_25 = 5793349241095934186LL;
long long int var_26 = -7276989067102337410LL;
unsigned int var_27 = 431935155U;
long long int var_28 = -4404579770080576210LL;
unsigned int var_29 = 4261986650U;
unsigned int var_30 = 2615615747U;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)73;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
