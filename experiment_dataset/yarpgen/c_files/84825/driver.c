#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2636415296U;
int var_7 = -1558309471;
signed char var_8 = (signed char)-1;
signed char var_9 = (signed char)120;
int zero = 0;
long long int var_19 = -440985835856771198LL;
unsigned long long int var_20 = 4133161576001311002ULL;
unsigned int var_21 = 2810505536U;
unsigned int var_22 = 1105005600U;
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
