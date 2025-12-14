#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7493406368442887125LL;
_Bool var_9 = (_Bool)1;
int var_10 = -140522562;
int zero = 0;
short var_13 = (short)27865;
unsigned long long int var_14 = 11274425272116117650ULL;
unsigned char var_15 = (unsigned char)68;
unsigned long long int var_16 = 7048561084472477643ULL;
signed char var_17 = (signed char)-1;
unsigned short arr_0 [18] ;
long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)47790;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3839273736247676517LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
