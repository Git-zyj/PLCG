#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8879875865064557550LL;
long long int var_1 = 1770003078521655186LL;
long long int var_2 = 6911819786948980552LL;
long long int var_3 = 5511703088994205615LL;
int var_4 = -190164075;
int var_5 = -1031584301;
int var_6 = -1849043827;
int var_8 = 1190731834;
int var_9 = -2147081787;
int var_10 = 1952392887;
long long int var_13 = 7779221426857796615LL;
long long int var_14 = 6123659495117040379LL;
int var_17 = -304360644;
int var_18 = 367160202;
int zero = 0;
int var_20 = -1567061490;
long long int var_21 = -2685137506159719849LL;
long long int var_22 = 8578382933468771132LL;
int var_23 = -62812488;
long long int var_24 = -208437221567006898LL;
int var_25 = 757280298;
int var_26 = -803447139;
int var_27 = -821317488;
int var_28 = 997335218;
int var_29 = 1903996927;
int arr_2 [10] ;
int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1140155453;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -809113161;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
