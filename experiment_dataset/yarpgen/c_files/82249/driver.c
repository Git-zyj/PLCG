#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5558;
signed char var_1 = (signed char)-35;
short var_2 = (short)-3318;
unsigned int var_7 = 3314013169U;
unsigned int var_8 = 90813296U;
int var_9 = 318705626;
int zero = 0;
int var_13 = 1910044570;
signed char var_14 = (signed char)36;
long long int var_15 = -915331518351147829LL;
long long int var_16 = -7707554450808548251LL;
signed char var_17 = (signed char)21;
unsigned int var_18 = 1334542370U;
int arr_0 [10] [10] ;
_Bool arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1480919130;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
