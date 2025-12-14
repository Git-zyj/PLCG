#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 8049723336729354015ULL;
unsigned int var_14 = 2202104587U;
unsigned long long int var_15 = 12645960795333775598ULL;
unsigned long long int var_16 = 4076151199278789721ULL;
short var_17 = (short)-5199;
int zero = 0;
signed char var_18 = (signed char)71;
short var_19 = (short)19841;
unsigned short var_20 = (unsigned short)35325;
void init() {
}

void checksum() {
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
