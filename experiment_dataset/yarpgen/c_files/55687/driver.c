#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4478519902736183290LL;
int var_10 = -58320442;
int var_11 = 496118172;
int var_14 = -64333428;
unsigned short var_15 = (unsigned short)58373;
int zero = 0;
int var_17 = 1106735149;
long long int var_18 = 4012362082831460450LL;
unsigned int var_19 = 453642337U;
unsigned long long int var_20 = 18281221866138769921ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
