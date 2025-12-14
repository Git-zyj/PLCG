#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10945;
unsigned int var_7 = 264500858U;
long long int var_9 = -1084604884751366016LL;
int var_11 = 1528371545;
unsigned short var_14 = (unsigned short)56487;
int zero = 0;
long long int var_17 = 8075473480049806667LL;
signed char var_18 = (signed char)-66;
void init() {
}

void checksum() {
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
