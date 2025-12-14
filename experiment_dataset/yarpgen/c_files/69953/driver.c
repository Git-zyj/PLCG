#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-21;
unsigned long long int var_6 = 9736925015726208648ULL;
unsigned long long int var_8 = 16921331357465276094ULL;
int var_10 = 1195094839;
short var_12 = (short)-12186;
int zero = 0;
signed char var_13 = (signed char)18;
signed char var_14 = (signed char)98;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)237;
unsigned long long int var_17 = 15349152121439985877ULL;
signed char var_18 = (signed char)88;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 11614194542114776819ULL;
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
