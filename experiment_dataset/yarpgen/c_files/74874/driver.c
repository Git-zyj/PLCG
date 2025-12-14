#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 56521075;
unsigned short var_3 = (unsigned short)14563;
long long int var_8 = -3824960619609053873LL;
int var_9 = -299405291;
unsigned char var_10 = (unsigned char)214;
signed char var_11 = (signed char)71;
unsigned int var_12 = 1581883158U;
unsigned int var_13 = 2455402064U;
int zero = 0;
unsigned int var_16 = 3324962703U;
short var_17 = (short)13508;
int var_18 = 1549025647;
unsigned short var_19 = (unsigned short)57188;
unsigned char var_20 = (unsigned char)79;
long long int var_21 = 7509714085555042172LL;
long long int var_22 = 2445691811419496172LL;
unsigned short var_23 = (unsigned short)36609;
unsigned short var_24 = (unsigned short)25150;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-78;
long long int arr_2 [21] ;
_Bool arr_13 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 5062422080667466769LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
