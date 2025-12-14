#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 561375058;
signed char var_14 = (signed char)10;
int var_16 = 1730264301;
unsigned short var_17 = (unsigned short)38655;
int zero = 0;
unsigned long long int var_18 = 17941890876738319064ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)33831;
signed char var_21 = (signed char)111;
unsigned short var_22 = (unsigned short)10591;
int var_23 = 2108535142;
unsigned char arr_0 [10] [10] ;
long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3381408483378981194LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
