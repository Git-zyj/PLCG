#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -763567745257805316LL;
unsigned long long int var_1 = 5334940303187453106ULL;
unsigned int var_2 = 2437581797U;
short var_3 = (short)-6768;
signed char var_5 = (signed char)-89;
short var_7 = (short)20608;
int zero = 0;
int var_10 = -556988490;
unsigned char var_11 = (unsigned char)193;
short var_12 = (short)-30490;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
