#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
signed char var_1 = (signed char)38;
signed char var_5 = (signed char)49;
signed char var_6 = (signed char)-115;
signed char var_7 = (signed char)33;
signed char var_9 = (signed char)0;
int zero = 0;
signed char var_11 = (signed char)-81;
signed char var_12 = (signed char)-20;
signed char var_13 = (signed char)-117;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)-63;
signed char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-56;
}

void checksum() {
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
