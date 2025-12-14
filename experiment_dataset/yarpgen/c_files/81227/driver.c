#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6600107486611921623LL;
signed char var_4 = (signed char)76;
int zero = 0;
unsigned int var_15 = 1008534325U;
long long int var_16 = -2751328498265489438LL;
unsigned char var_17 = (unsigned char)15;
unsigned long long int var_18 = 10274890807356103073ULL;
unsigned int var_19 = 166021797U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
