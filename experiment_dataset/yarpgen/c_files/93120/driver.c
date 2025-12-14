#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6006973281930825886ULL;
int var_3 = -807527914;
int var_4 = 1504328201;
long long int var_10 = 4773836851229043545LL;
short var_13 = (short)5615;
int var_16 = 398725430;
short var_17 = (short)-19307;
int zero = 0;
unsigned long long int var_18 = 16946373819818884235ULL;
long long int var_19 = -5533320487124385432LL;
short var_20 = (short)-3457;
unsigned long long int var_21 = 4800811950866156215ULL;
int var_22 = 152373100;
unsigned short var_23 = (unsigned short)10342;
int var_24 = 1848056420;
signed char arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
unsigned int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2491192953U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 2328442193U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
