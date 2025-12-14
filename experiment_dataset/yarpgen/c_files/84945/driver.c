#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3849991794U;
long long int var_3 = -3987680858569900334LL;
long long int var_4 = 5808275721446088754LL;
short var_5 = (short)-5066;
int var_7 = 815432218;
unsigned int var_9 = 3976374648U;
unsigned int var_10 = 2430784194U;
unsigned short var_12 = (unsigned short)42640;
long long int var_13 = 4416134865937692781LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)68;
unsigned char var_16 = (unsigned char)51;
unsigned char var_17 = (unsigned char)143;
long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -5130741150656313529LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2613404631808075809ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1739710501;
}

void checksum() {
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
