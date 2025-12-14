#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2336579060118949527LL;
long long int var_2 = -4071616053190674443LL;
short var_4 = (short)20401;
long long int var_5 = 2389801626677263363LL;
long long int var_6 = -8851133079288814330LL;
long long int var_7 = -8497706288430145190LL;
long long int var_8 = 2214305465175253132LL;
int zero = 0;
long long int var_10 = -2995037065224163108LL;
short var_11 = (short)-7163;
long long int var_12 = 3963433539319412005LL;
long long int var_13 = -8171546871588897080LL;
short var_14 = (short)-16411;
long long int var_15 = -712139047181842699LL;
short var_16 = (short)12005;
short var_17 = (short)9642;
long long int var_18 = -3049438055595231151LL;
short arr_1 [12] [12] ;
long long int arr_3 [12] [12] ;
short arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-24175;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 7849730373107871627LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (short)8821;
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
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
