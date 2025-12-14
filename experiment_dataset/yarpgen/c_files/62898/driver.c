#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5385410258307210574LL;
signed char var_4 = (signed char)-25;
int var_5 = -2127712526;
unsigned short var_7 = (unsigned short)7233;
int var_13 = -1435354175;
unsigned int var_14 = 4196020828U;
int zero = 0;
unsigned short var_15 = (unsigned short)52731;
int var_16 = 939120395;
unsigned int var_17 = 3245042168U;
void init() {
}

void checksum() {
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
