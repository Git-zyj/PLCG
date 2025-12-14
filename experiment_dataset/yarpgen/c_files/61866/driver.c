#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned char var_4 = (unsigned char)94;
int var_8 = -913721187;
int zero = 0;
unsigned int var_10 = 1105246605U;
unsigned int var_11 = 3684575235U;
int var_12 = -1191171644;
int var_13 = 881706666;
unsigned short var_14 = (unsigned short)15725;
long long int var_15 = 6669101554164904759LL;
int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1372253656;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
