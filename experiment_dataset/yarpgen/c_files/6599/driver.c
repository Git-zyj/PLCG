#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2402933426827431422ULL;
short var_3 = (short)10629;
int var_4 = 2061486839;
unsigned int var_11 = 2588504610U;
int zero = 0;
long long int var_14 = 7297490995606396325LL;
unsigned int var_15 = 2244156689U;
int var_16 = 2021851660;
unsigned long long int var_17 = 9033506561719765833ULL;
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
