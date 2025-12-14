#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4217271904U;
unsigned int var_2 = 2468339047U;
signed char var_4 = (signed char)66;
long long int var_10 = -5433080896498279427LL;
int var_11 = -1195817392;
int zero = 0;
short var_17 = (short)-25931;
int var_18 = 1726785722;
short var_19 = (short)-6915;
signed char var_20 = (signed char)88;
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
