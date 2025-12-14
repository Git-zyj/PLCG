#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6933774464853864525LL;
int var_1 = 1156355223;
long long int var_3 = 4493921780473594448LL;
unsigned long long int var_12 = 178328645100119987ULL;
int zero = 0;
long long int var_18 = -8777309471631274020LL;
unsigned int var_19 = 2462487663U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
