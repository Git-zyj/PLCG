#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7967184757212714117LL;
unsigned long long int var_4 = 3566656338892129654ULL;
int var_6 = -1274990005;
unsigned long long int var_8 = 5666851955378611810ULL;
int var_9 = -1748116962;
int var_13 = -1026761168;
signed char var_15 = (signed char)28;
int zero = 0;
int var_16 = 770254905;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
