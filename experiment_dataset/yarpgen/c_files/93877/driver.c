#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1170355207805418229ULL;
unsigned int var_5 = 2435046572U;
unsigned short var_6 = (unsigned short)33834;
unsigned long long int var_7 = 15337103696706367526ULL;
unsigned short var_9 = (unsigned short)10389;
int zero = 0;
unsigned int var_11 = 873947639U;
unsigned long long int var_12 = 14574358784619348286ULL;
int var_13 = 2087517407;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
