#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -968169170;
_Bool var_2 = (_Bool)1;
short var_6 = (short)-4189;
int var_8 = 345462056;
unsigned long long int var_12 = 7934331068446761370ULL;
int zero = 0;
signed char var_16 = (signed char)29;
unsigned short var_17 = (unsigned short)40839;
int var_18 = -219531805;
unsigned long long int var_19 = 4612600985584302513ULL;
void init() {
}

void checksum() {
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
