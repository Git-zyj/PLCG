#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59068;
signed char var_4 = (signed char)-49;
long long int var_10 = 1460091120682575386LL;
int zero = 0;
long long int var_16 = -4498838225496067887LL;
signed char var_17 = (signed char)-28;
unsigned int var_18 = 3431281490U;
long long int var_19 = -4951078399823497058LL;
long long int var_20 = 1850356279593265616LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
