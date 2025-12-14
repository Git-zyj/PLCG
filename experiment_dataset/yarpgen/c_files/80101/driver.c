#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
signed char var_3 = (signed char)-13;
unsigned short var_4 = (unsigned short)5613;
signed char var_7 = (signed char)49;
long long int var_11 = 2945555282025270430LL;
signed char var_12 = (signed char)-34;
int zero = 0;
signed char var_15 = (signed char)126;
unsigned long long int var_16 = 12268014130078398351ULL;
unsigned long long int var_17 = 18148587866060558004ULL;
unsigned short var_18 = (unsigned short)28630;
unsigned int var_19 = 610086033U;
signed char var_20 = (signed char)19;
unsigned short var_21 = (unsigned short)50726;
unsigned int arr_0 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 151598716U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1954117737309439939LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
