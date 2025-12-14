#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-920;
long long int var_2 = 7825340865228836521LL;
long long int var_3 = -5510026215490073451LL;
long long int var_4 = -552283588337989065LL;
short var_5 = (short)15230;
short var_6 = (short)24404;
long long int var_7 = 5856126818330126495LL;
long long int var_8 = -5537447558453584452LL;
long long int var_9 = 2111561978397831027LL;
int zero = 0;
long long int var_10 = 2484670174104713744LL;
long long int var_11 = 7579325850457158686LL;
long long int var_12 = -9126281501346964551LL;
long long int var_13 = -5630895017692552191LL;
long long int var_14 = 8876549108408486632LL;
long long int var_15 = -4600523146864647075LL;
short arr_3 [18] [18] ;
long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-29832;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 6298391656320085434LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
