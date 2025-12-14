#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
signed char var_1 = (signed char)-91;
unsigned long long int var_3 = 13364163402050362613ULL;
unsigned short var_6 = (unsigned short)29517;
unsigned int var_8 = 3082435032U;
int var_9 = -2021782703;
unsigned short var_11 = (unsigned short)50054;
unsigned int var_13 = 2118276601U;
int zero = 0;
unsigned long long int var_14 = 1517871152548449726ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1399437569605113406ULL;
unsigned int var_17 = 960627047U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
