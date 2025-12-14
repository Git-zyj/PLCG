#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1350009319634701930LL;
unsigned char var_7 = (unsigned char)90;
long long int var_9 = 7367872157237344320LL;
unsigned long long int var_10 = 90957901094681246ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 12531610604566847249ULL;
unsigned int var_14 = 605638207U;
short var_15 = (short)-15757;
short var_16 = (short)-437;
unsigned long long int var_17 = 13983504937287405708ULL;
unsigned long long int var_18 = 3377557506098738299ULL;
long long int var_19 = 8686918321296084101LL;
short var_20 = (short)22935;
long long int arr_1 [25] [25] ;
_Bool arr_4 [25] [25] ;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 2856010443307988128LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)25175;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
