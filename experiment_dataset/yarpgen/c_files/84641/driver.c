#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1984107281;
int var_2 = -767625360;
unsigned char var_3 = (unsigned char)5;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2767504943904372524ULL;
unsigned char var_6 = (unsigned char)10;
unsigned long long int var_8 = 14063350831775788053ULL;
unsigned long long int var_9 = 12894376612278114420ULL;
unsigned int var_10 = 1501457681U;
short var_12 = (short)-10137;
int zero = 0;
signed char var_13 = (signed char)-4;
int var_14 = -69953845;
unsigned long long int var_15 = 7212464734897760529ULL;
unsigned short var_16 = (unsigned short)40472;
unsigned long long int var_17 = 17348409902342891936ULL;
unsigned int var_18 = 2055862811U;
_Bool var_19 = (_Bool)1;
unsigned int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 676099299U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
