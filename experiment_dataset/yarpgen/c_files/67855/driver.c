#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned short var_1 = (unsigned short)10542;
unsigned long long int var_6 = 7581175798441985025ULL;
unsigned int var_7 = 1278241851U;
unsigned int var_9 = 3179958081U;
int zero = 0;
unsigned int var_14 = 3754253394U;
signed char var_15 = (signed char)-100;
long long int var_16 = -3693674618156935064LL;
unsigned long long int var_17 = 5191455353969116543ULL;
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
