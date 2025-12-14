#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -449932252;
int var_3 = -227471610;
unsigned long long int var_4 = 8350767814211213116ULL;
int zero = 0;
long long int var_13 = -7384040280523614322LL;
unsigned char var_14 = (unsigned char)249;
unsigned int var_15 = 1397944140U;
long long int var_16 = -3608837352277761977LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
