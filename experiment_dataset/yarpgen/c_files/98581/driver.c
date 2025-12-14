#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)121;
unsigned int var_6 = 2513012054U;
unsigned long long int var_7 = 1615634277653337828ULL;
signed char var_11 = (signed char)-1;
unsigned char var_12 = (unsigned char)53;
unsigned long long int var_13 = 17336101639368771704ULL;
unsigned long long int var_15 = 9555435337032174062ULL;
unsigned long long int var_17 = 3555441962066784050ULL;
int zero = 0;
short var_19 = (short)14294;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16888567702023647204ULL;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 868683009570341263ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
