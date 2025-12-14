#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)181;
signed char var_6 = (signed char)66;
unsigned long long int var_7 = 2096403485531582982ULL;
long long int var_11 = 5063035622874188080LL;
int zero = 0;
unsigned int var_13 = 510859435U;
long long int var_14 = 3476868179226436696LL;
signed char var_15 = (signed char)-74;
long long int var_16 = 5272186914777766339LL;
unsigned char var_17 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
