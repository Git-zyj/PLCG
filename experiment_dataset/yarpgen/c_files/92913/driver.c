#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 4207316617790176412ULL;
unsigned long long int var_3 = 5054916173187237922ULL;
unsigned long long int var_4 = 1696982685156421404ULL;
long long int var_5 = 7438743592384633085LL;
unsigned long long int var_7 = 16180494823360369232ULL;
int var_8 = -847391514;
int var_9 = 411268803;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 1666534321591293334LL;
long long int var_12 = 4099640453641546328LL;
long long int var_13 = -4716598287318050970LL;
int var_14 = -56515834;
long long int var_15 = -2416862934593254362LL;
long long int var_16 = -3433622960106583887LL;
int var_17 = -433027473;
_Bool arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
