#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33946;
unsigned int var_4 = 3429627089U;
signed char var_9 = (signed char)75;
unsigned long long int var_15 = 595795910503838955ULL;
unsigned long long int var_16 = 12127900082895365779ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)145;
unsigned int var_18 = 361526167U;
unsigned short var_19 = (unsigned short)35008;
unsigned int var_20 = 1638826149U;
void init() {
}

void checksum() {
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
