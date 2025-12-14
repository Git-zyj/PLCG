#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)90;
unsigned char var_6 = (unsigned char)147;
unsigned char var_8 = (unsigned char)182;
_Bool var_9 = (_Bool)1;
long long int var_11 = 2630866057642461792LL;
int zero = 0;
unsigned short var_12 = (unsigned short)22802;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)74;
unsigned long long int var_15 = 14833046687876334396ULL;
signed char var_16 = (signed char)-49;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 10118095764706371623ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
