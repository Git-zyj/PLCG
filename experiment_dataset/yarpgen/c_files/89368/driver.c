#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-126;
signed char var_3 = (signed char)-112;
int var_5 = -1056871097;
long long int var_6 = 4331623052183813931LL;
long long int var_8 = -4247296773980815113LL;
int zero = 0;
long long int var_15 = -7620678843215717291LL;
signed char var_16 = (signed char)-109;
signed char var_17 = (signed char)113;
int var_18 = 2001275947;
int var_19 = 683668488;
unsigned char arr_2 [18] ;
signed char arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)81;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
