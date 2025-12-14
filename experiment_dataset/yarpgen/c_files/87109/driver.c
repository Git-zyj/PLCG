#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29076;
signed char var_2 = (signed char)-44;
signed char var_4 = (signed char)-64;
unsigned long long int var_5 = 9944263637914594753ULL;
long long int var_6 = -6298357292435341744LL;
long long int var_7 = -4231010459661289034LL;
unsigned long long int var_8 = 2658985707229514084ULL;
unsigned int var_9 = 1009397751U;
long long int var_12 = -5536583718733989266LL;
long long int var_13 = 1539478791132508409LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)5852;
unsigned short var_17 = (unsigned short)19359;
long long int var_18 = -6581298090001291586LL;
long long int var_19 = 4257586007141467648LL;
short var_20 = (short)26755;
unsigned short var_21 = (unsigned short)28039;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] ;
short arr_2 [25] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 5469299215172378637ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1393547823308628779LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-495;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 6404381379460433191LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
