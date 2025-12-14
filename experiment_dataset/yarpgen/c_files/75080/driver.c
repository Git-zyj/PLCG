#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
long long int var_5 = 5463581428771849471LL;
long long int var_10 = 1318143955217222336LL;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
long long int var_12 = 1649593984380115147LL;
long long int var_13 = 1130762773588605230LL;
long long int var_14 = 8198968173116726540LL;
unsigned long long int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 13996210812367749487ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
