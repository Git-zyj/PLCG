#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7737532302626175945ULL;
long long int var_1 = -6821718771755565963LL;
int var_5 = -77367991;
unsigned long long int var_7 = 14381578132086356346ULL;
unsigned long long int var_9 = 11779005179002884527ULL;
unsigned int var_10 = 718939848U;
unsigned int var_11 = 570074768U;
unsigned long long int var_13 = 1484037799433592065ULL;
int var_18 = -667597999;
int zero = 0;
unsigned long long int var_19 = 6545568307605192555ULL;
unsigned int var_20 = 3931074037U;
unsigned long long int var_21 = 140168324144109085ULL;
long long int var_22 = 4941846918188463438LL;
long long int arr_1 [22] [22] ;
int arr_5 [22] [22] ;
unsigned long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 969705492096272825LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -373286199 : -637605981;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 737889625277481597ULL : 4272145843807464105ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
