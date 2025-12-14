#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2023824312U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 3970044183016142615ULL;
long long int var_13 = -7088154634326049898LL;
long long int var_16 = -2224340247927461663LL;
int zero = 0;
int var_18 = 1372830861;
long long int var_19 = -1723980389368652551LL;
unsigned long long int var_20 = 661138003714477659ULL;
int var_21 = -1085243750;
void init() {
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
