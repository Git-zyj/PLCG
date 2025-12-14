#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6008887662944616729LL;
unsigned int var_2 = 3997941255U;
unsigned char var_4 = (unsigned char)137;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)2;
unsigned int var_9 = 632334477U;
int var_10 = 883178319;
_Bool var_11 = (_Bool)1;
short var_12 = (short)9352;
unsigned int var_13 = 411356884U;
long long int var_14 = 7021781138198818644LL;
int zero = 0;
int var_15 = 404774354;
unsigned long long int var_16 = 15382349705319884135ULL;
unsigned long long int var_17 = 16184768334070564353ULL;
int var_18 = 1903852652;
int var_19 = 883461803;
unsigned short var_20 = (unsigned short)46809;
short var_21 = (short)11351;
long long int arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3692744432021861584LL : -4428757876547232986LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -714373882;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3645910616U : 254231785U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
