#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned long long int var_6 = 4378281042913439320ULL;
int var_7 = 307813421;
int zero = 0;
signed char var_20 = (signed char)-24;
signed char var_21 = (signed char)67;
int var_22 = 1026035620;
unsigned short var_23 = (unsigned short)5148;
unsigned short var_24 = (unsigned short)28157;
signed char var_25 = (signed char)-113;
unsigned char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)243;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
