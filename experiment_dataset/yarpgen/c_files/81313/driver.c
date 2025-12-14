#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7435609649870203816LL;
int var_7 = 102770774;
signed char var_10 = (signed char)89;
long long int var_16 = 5347222008090057300LL;
int zero = 0;
short var_18 = (short)-617;
long long int var_19 = -6614732478053637256LL;
signed char var_20 = (signed char)-19;
long long int var_21 = -2905073075854061870LL;
unsigned char arr_1 [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)169 : (unsigned char)9;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
