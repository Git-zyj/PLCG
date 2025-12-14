#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14877691162146095199ULL;
unsigned long long int var_5 = 6716067469366946245ULL;
unsigned long long int var_14 = 6455062950656542632ULL;
unsigned long long int var_17 = 8782761643187581899ULL;
int zero = 0;
signed char var_18 = (signed char)-114;
unsigned long long int var_19 = 16692109269795382274ULL;
unsigned long long int var_20 = 17500667284122177666ULL;
long long int var_21 = -2498904208662727495LL;
long long int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -25637642085003339LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
