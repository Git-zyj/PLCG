#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)26;
long long int var_3 = 2880201643399800379LL;
short var_5 = (short)22255;
long long int var_6 = -5004387048081265258LL;
unsigned long long int var_7 = 7908701582208631547ULL;
unsigned long long int var_9 = 9185355570781997001ULL;
int zero = 0;
int var_10 = -159021345;
unsigned int var_11 = 3649733329U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
