#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8658061678166331485LL;
unsigned long long int var_5 = 15972637213422489352ULL;
long long int var_6 = -2968176237695797041LL;
int var_7 = -1771807837;
unsigned long long int var_9 = 15856670951082425020ULL;
signed char var_12 = (signed char)-84;
int zero = 0;
long long int var_13 = -7905989216218863969LL;
signed char var_14 = (signed char)56;
long long int var_15 = -4112019220745032149LL;
int var_16 = 998042677;
unsigned long long int var_17 = 16044019636894612391ULL;
long long int var_18 = 3269855808927179031LL;
long long int arr_0 [13] ;
long long int arr_1 [13] ;
long long int arr_2 [13] ;
int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -114912763985179503LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7093043041064668463LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1837848245806512958LL : -7470648839796693564LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -2126994918 : 608274611;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
