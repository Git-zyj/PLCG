#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7295439830354812616LL;
int var_3 = -387148155;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)28212;
_Bool var_13 = (_Bool)1;
long long int var_14 = -5347606466153619668LL;
long long int var_15 = -7571441604197229563LL;
long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3239583346099957971LL : 5309411001638295995LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
