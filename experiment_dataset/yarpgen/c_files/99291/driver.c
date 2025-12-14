#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 477949106U;
long long int var_6 = 253919388490122703LL;
long long int var_11 = -8781666921876781762LL;
signed char var_14 = (signed char)-17;
int zero = 0;
long long int var_17 = -629257493125662623LL;
int var_18 = -2057592352;
unsigned int var_19 = 3049331272U;
long long int var_20 = -3100418140638694591LL;
unsigned char var_21 = (unsigned char)208;
short var_22 = (short)-20504;
int arr_1 [12] [12] ;
unsigned long long int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1115026385;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 4284111395972399122ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
