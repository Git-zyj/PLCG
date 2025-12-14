#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1767373950;
short var_6 = (short)-7397;
unsigned int var_12 = 2288079042U;
long long int var_16 = 6240992342779333577LL;
int zero = 0;
unsigned short var_19 = (unsigned short)56332;
int var_20 = 79706493;
short var_21 = (short)-31587;
unsigned long long int var_22 = 5384965495292478337ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
