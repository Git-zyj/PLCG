#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15744218561018310329ULL;
signed char var_3 = (signed char)121;
unsigned long long int var_4 = 1250567121819619763ULL;
signed char var_8 = (signed char)-3;
signed char var_10 = (signed char)45;
signed char var_12 = (signed char)8;
unsigned long long int var_14 = 737764657018810709ULL;
int zero = 0;
unsigned long long int var_15 = 2047026338545222577ULL;
signed char var_16 = (signed char)96;
unsigned long long int var_17 = 2022106828494749324ULL;
unsigned long long int var_18 = 9504217198457333149ULL;
signed char var_19 = (signed char)22;
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
