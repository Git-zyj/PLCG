#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29374;
unsigned char var_3 = (unsigned char)185;
unsigned long long int var_5 = 5067535474867387044ULL;
unsigned int var_7 = 1789157769U;
unsigned short var_9 = (unsigned short)64357;
short var_10 = (short)9261;
int zero = 0;
long long int var_17 = 5764957522298334011LL;
short var_18 = (short)-7919;
_Bool var_19 = (_Bool)1;
unsigned short arr_0 [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)16944;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 15145555455397056497ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
